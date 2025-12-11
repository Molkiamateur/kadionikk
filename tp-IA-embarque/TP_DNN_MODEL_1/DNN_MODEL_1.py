#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sun Nov 27 11:33:26 2022

@author: ENSEIRB-MATMECA
"""

from tensorflow.keras.utils import to_categorical
from sklearn.datasets import fetch_openml
from sklearn.preprocessing import LabelEncoder, StandardScaler
import sys
import matplotlib.pyplot as plt
import numpy as np
import h5py
from challenges import *
from IPython import get_ipython
get_ipython().run_line_magic('matplotlib', 'inline')
seed = 0
np.random.seed(seed)
import tensorflow as tf
tf.random.set_seed(seed)
import os


print("""
############################################
# Generation Des Données                   #
############################################
""")
coords=[]
color=[]
for i in range(10000):
    x=np.random.uniform(low=0.,high=0.5)
    y=np.random.uniform(low=0.,high=1.)
    coords.append([x,y])
    color.append(0)
    x=np.random.uniform(low=0.5,high=1.)
    y=np.random.uniform(low=0.,high=1.)
    coords.append([x,y])
    color.append(1)

save_challenge(normalize_coords(coords),color,"ch3")
plot_challenge(normalize_coords(coords),color,"Challenge 3 : Left/Right")

print("""
#############################################
#  Recuperation des données d'apprentissage #
#############################################
""")
inp,output = load_challenge_data("ch3")
print(inp)
print(output)

print("""
#############################################
#  creation reseau en KERAS                 #
#############################################  
""")  
from tensorflow.keras.models import Sequential
from tensorflow.keras.optimizers import Adam
from tensorflow.keras.regularizers import l1
from tensorflow.keras.layers import Dense, Activation, Flatten
from tensorflow.keras import *
from qkeras.qlayers import QDense,QActivation
from qkeras.quantizers import quantized_bits, quantized_relu
from callbacks import all_callbacks

print("-------------KERAS Build Model----------------------")
########
# A FAIRE : Modele du DNN
##############################
keras_model = Sequential()
# Couche d'entrée
keras_model.add(Dense(16, input_dim=2, activation='relu'))
# Couche cachée
keras_model.add(Dense(8, activation='relu'))
# Couche de sortie
keras_model.add(Dense(1, activation='sigmoid'))

print(keras_model.summary())


print(' \
#############################################\n \
#  Apprentissage                            #\n \
#############################################\n \
')

# creation des données d'entrainement et de test
from sklearn.model_selection import train_test_split
X_train,X_test,Y_train,Y_test = train_test_split(inp,output,test_size=0.2, random_state=42)


#############################################
#  Apprentissage                            #
#############################################
#RECHERCHE D'UNE PRECISION DE 99%
n_epoch = 50
n_batch = 64
adam = Adam(lr=0.00001)
keras_model.compile(optimizer=adam, loss=['binary_crossentropy'], metrics=['accuracy'])
callbacks = all_callbacks(stop_patience = 1000,
                          lr_factor = 0.5,
                          lr_patience = 10,
                          lr_epsilon = 0.000001,
                          lr_cooldown = 2,
                          lr_minimum = 0.0000001,
                          outputDir = 'model_1')
history = keras_model.fit(X_train, Y_train, batch_size=n_batch,
          epochs=n_epoch, validation_split=0.25, shuffle=True,
          callbacks = callbacks.callbacks)
keras_model.save('model_1/best_model_1.h5')   
print(keras_model.summary())


baseline_score = keras_model.evaluate(X_test, Y_test, batch_size=n_batch)
print("Le model a une précision de : ",baseline_score[1], "%\n")


print(' \
############################################# \
#  Analyse & Performance                    # \
############################################# \
    ')
import plotting
import matplotlib.pyplot as plt
from sklearn.metrics import accuracy_score
fig,ax = plt.subplots(2)
lst = [["loss","val_loss"],["accuracy","val_accuracy"]]
for i,subList in enumerate(lst):
    [ax[i].plot(history.history[cle], label=cle) for cle in lst[i]]
    ax[i].legend()
plt.show()
score = keras_model.evaluate(X_test, Y_test)
print("la fonction de coût est de %.3f. avec un taux de bonne reponse : %.2f"%(score[0],score[1]))
print()
y_keras = keras_model.predict(X_test)
y_keras = [val[0] for val in y_keras]
print(y_keras[0:5])
y_keras = [round(i) for i in y_keras]
for sample_predict,sample_true in zip(y_keras[0:5],Y_test[0:5]):
    print(sample_predict,' ==> ', sample_true)
print()    
print("Accuracy: {}".format(accuracy_score(Y_test, y_keras)))

print(' \
#############################################\n \
#  PROFILING                                #\n \
#############################################\n \
    ')
import hls4ml
config = hls4ml.utils.config_from_keras_model(keras_model, granularity='model')
config['Model']['Precision'] = 'ap_fixed<16,2>'
config['Model']['ReuseFactor'] = 100
config['Model']['Strategy'] = 'latency'
print("-----------------------------------")
print("Configuration")
plotting.print_dict(config)
print("-----------------------------------")
config = hls4ml.utils.config_from_keras_model(keras_model, granularity='name')
plotting.print_dict(config)
print("-----------------------------------")
for layer in config['LayerName'].keys():
    config['LayerName'][layer]['Trace'] = True
hls_model = hls4ml.converters.convert_from_keras_model(keras_model,
                                                       hls_config=config,
                                                       output_dir='model_1/model_1_hls4ml_prj',
                                                       part='ARTIX NEXYS A7') # COMPOSANTS
hls4ml.utils.plot_model(hls_model, show_shapes=True, show_precision=True, to_file=None)
hls4ml.model.profiling.numerical(model=keras_model, hls_model=hls_model, X=X_test[:1000])

hls_model.compile()
hls4ml_pred, hls4ml_trace = hls_model.trace(X_test[:1000])
keras_trace = hls4ml.model.profiling.get_ymodel_keras(keras_model, X_test[:1000])
y_hls = hls_model.predict(X_test)

print(' \
############################################# \
#  CONVERSION en HLS                        # \
############################################# \
    ')
import hls4ml

config = hls4ml.utils.config_from_keras_model(keras_model, granularity='type')
config_cle = config['Model'].items()
print(config_cle)
# KERAS
config['Model']['Precision'] = 'ap_fixed<16,2>'
config['Model']['ReuseFactor'] = 100
config['Model']['Strategy'] = 'resource'
config['LayerType']['Dense']['Precision']['weight'] = 'ap_fixed<16,2>'
config['LayerType']['Dense']['Precision']['bias']   = 'ap_fixed<16,2>'
config['LayerType']['Dense']['Precision']['result'] = 'ap_fixed<16,2>'
config['LayerType']['Dense']['ReuseFactor'] = 100
config['LayerType']['Activation']['ReuseFactor'] = 100
config['LayerType']['Activation']['Precision'] = 'ap_fixed<16,2>'

hls_model = hls4ml.converters.convert_from_keras_model(keras_model,
                                                       hls_config=config,
                                                       output_dir='model_1/model_1_hls4ml_prj',
                                                       part='ARTIX NEXYS A7', # COMPOSANT
                                                       project_name='model_1_hls4ml_prj',
                                                       )
 
 
 
print("--------KERAS HLS MODEL---------------------------")
print(config)
print("-----------------------------------")
hls4ml.utils.plot_model(hls_model, show_shapes=True, show_precision=True, to_file=None)
print("-----------------------------------")

hls_model.compile()
X_test = np.ascontiguousarray(X_test)
y_hls = hls_model.predict(X_test)
y_hls = [val[0] for val in y_hls]
print(y_hls[0:5])
y_hls = [round(i) for i in y_hls]
print(y_hls[0:5])
 
print(' \
############################################ \
#  Compare Keras & HLS Resource            # \
############################################ \
    ')

print("Keras  Accuracy: {}".format(accuracy_score(Y_test, y_keras)))
print("resource hls4ml Accuracy: {}".format(accuracy_score(Y_test, y_hls)))
for sample_predict,sample_true in zip(y_hls[0:10],Y_test[0:10]):
    print(sample_predict,' ==> ', sample_true)


print(' \
############################################\n \
#  Implementation & Synthese de VHDL       #\n \
############################################\n \
    ')
hls_model.build(csim=False)

hls4ml.report.read_vivado_report('model_1/model_1_hls4ml_prj/')


