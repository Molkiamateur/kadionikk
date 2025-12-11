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

print("-------------QKERAS Build Model----------------------")
########################
# MODELE EN QKERAS
#########################
keras_model = Sequential()

# Couche d'entrée
keras_model.add(QDense(200, 
                       input_dim=2, 
                       kernel_quantizer=quantized_bits(16,2,1),
                       bias_quantizer=quantized_bits(16,2,1),
                       kernel_initializer="lecun_uniform",
                       name="q_dense_1",
                       kernel_regularizer=l1(0.0001)))

keras_model.add(QActivation(activation=quantized_relu(9,2), name="q_relu_1"))
# Couche cachée
keras_model.add(QDense(100, 
                       kernel_quantizer=quantized_bits(16,2,1),
                       bias_quantizer=quantized_bits(16,2,1),
                       kernel_initializer="lecun_uniform",
                       name="q_dense_2",
                       kernel_regularizer=l1(0.0001)))

keras_model.add(QActivation(activation=quantized_relu(9,2), name="q_relu_2"))

keras_model.add(QDense(50, 
                       kernel_quantizer=quantized_bits(16,2,1),
                       bias_quantizer=quantized_bits(16,2,1),
                       kernel_initializer="lecun_uniform",
                       name="q_dense_3",
                       kernel_regularizer=l1(0.0001)))

keras_model.add(QActivation(activation=quantized_relu(9,2), name="q_relu_3"))
# Couche de sortie
keras_model.add(QDense(1, 
                       kernel_quantizer=quantized_bits(16,2,1),
                       bias_quantizer=quantized_bits(16,2,1),
                       kernel_initializer="lecun_uniform",
                       name="q_dense_4",
                       kernel_regularizer=l1(0.0001)))

keras_model.add(QActivation(activation=quantized_bits(9,2,1), name="sigmoid"))


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
n_epoch = 140
n_batch = 64
adam = Adam(lr=0.00001)
keras_model.compile(optimizer=adam, loss=['binary_crossentropy'], metrics=['accuracy'])
callbacks = all_callbacks(stop_patience = 1000,
                          lr_factor = 0.5,
                          lr_patience = 10,
                          lr_epsilon = 0.000001,
                          lr_cooldown = 2,
                          lr_minimum = 0.0000001,
                          outputDir = 'model_2')
history = keras_model.fit(X_train, Y_train, batch_size=n_batch,
          epochs=n_epoch, validation_split=0.25, shuffle=True,
          callbacks = callbacks.callbacks)
keras_model.save('model_2/best_model_2.h5')   
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
############################################## \
# PRUNING MODEL                              # \
############################################## ')
   
import tensorflow_model_optimization as tfmot
from tensorflow.keras.optimizers import Adam
import tensorflow as tf

# Définition des paramètres de pruning
pruning_params = {
    "pruning_schedule": tfmot.sparsity.keras.ConstantSparsity(
        target_sparsity=0.75,
        begin_step=2000,
        frequency=100
    )
}

# Application du pruning
model_for_pruning = tfmot.sparsity.keras.prune_low_magnitude(
    keras_model,
    **pruning_params
)

# Compilation
adam = Adam(learning_rate=1e-5)
model_for_pruning.compile(
    optimizer=adam,
    loss='binary_crossentropy',
    metrics=['accuracy']
)

print(model_for_pruning.summary())

# Callbacks
callbacks = all_callbacks(
    stop_patience=1000,
    lr_factor=0.5,
    lr_epsilon=1e-6,
    lr_cooldown=2,
    lr_minimum=1e-7,
    lr_patience=10,
    outputDir='model_2_pruned'
)
callbacks.callbacks.append(
    tf.keras.callbacks.TensorBoard(histogram_freq=1, profile_batch='500,520')
)
callbacks.callbacks.append(tfmot.sparsity.keras.UpdatePruningStep())
callbacks.callbacks.append(
    tfmot.sparsity.keras.PruningSummaries(log_dir='./logdir')
)

# Entraînement
history = model_for_pruning.fit(
    X_train, Y_train,
    batch_size=n_batch,
    epochs=n_epoch,
    validation_split=0.1,
    shuffle=True,
    callbacks=callbacks.callbacks
)


"""
from tensorflow_model_optimization.python.core.sparsity.keras import prune, pruning_callbacks, pruning_schedule
from tensorflow_model_optimization.sparsity.keras import strip_pruning
import tensorflow_model_optimization as tfmopt
import tensorflow as tf

##############################################
# CODE POUR L'ELAGAGE                
# A ECRIE variable model_for_pruning 
##############################################

pruning_params = {"pruning_schedule" : pruning_schedule.ConstantSparsity(0.75, begin_step=2000, frequency=100)}

model_for_pruning = prune.prune_low_magnitude(keras_model,
                                              pruning_params)

adam = Adam(lr=0.00001)
model_for_pruning.compile(optimizer=adam, 
                         loss=['binary_crossentropy'],
                         metrics=['accuracy'])

print(model_for_pruning.summary())

callbacks = all_callbacks(stop_patience = 1000,
                          lr_factor = 0.5,
                          lr_epsilon = 0.000001,
                          lr_cooldown = 2,
                          lr_minimum = 0.0000001,
                          lr_patience = 10,
                          outputDir = 'model_2_pruned')
callbacks.callbacks.append(tf.keras.callbacks.TensorBoard(histogram_freq = 1,
                                                 profile_batch = '500,520'))
callbacks.callbacks.append( pruning_callbacks.UpdatePruningStep())
callbacks.callbacks.append( pruning_callbacks.PruningSummaries(log_dir='./logdir') )

history = model_for_pruning.fit(X_train, Y_train, batch_size=n_batch,
          epochs=n_epoch, validation_split=0.1, shuffle=True,
          callbacks = callbacks.callbacks)
"""
##################################################
# Visualisation des performance after PRUNING    #
##################################################
print("-------------KERAS Accuracy Model----------------------")
import matplotlib.pyplot as plt

fig, ax = plt.subplots(2)

lst = [["loss", "val_loss"], ["accuracy", "val_accuracy"]]
for i, sous_liste in enumerate(lst):
    [ax[i].plot(history.history[cle], label=cle) for cle in lst[i]]
    ax[i].legend()
plt.show()

pruned_score = model_for_pruning.evaluate(X_test, Y_test, batch_size=100)
print("Le model elagué une précision de : ",pruned_score[1], "%\n")
print("La fonction de coût sur l'échantillon test vaut %.3f.\n Le taux de bonnes réponses est %.2f"%(pruned_score[0], pruned_score[1]))
print("Le model de base a une précision de : ",baseline_score[1], "%\n")
print("La fonction de coût sur l'échantillon test vaut %.3f.\n Le taux de bonnes réponses est %.2f"%(baseline_score[0], baseline_score[1]))



##############################################
# CODE POUR INCORPORER L'ELAGAGE                
# DANS LE MODELE A ECRIE variable model_for_pruning 
##############################################


w = model_for_pruning.layers[0].weights[0].numpy()
h, b = np.histogram(w, bins=100)
plt.figure(figsize=(7,7))
plt.bar(b[:-1], h, width=b[1]-b[0])
plt.semilogy()
print('% of zeros = {}'.format(np.sum(w==0)/np.size(w)))



print(' \
#############################################\n \
#  PROFILING                                #\n \
#############################################\n \
    ')
import hls4ml
from tensorflow_model_optimization.sparsity.keras import strip_pruning

model_stripped = strip_pruning(model_for_pruning)

config = hls4ml.utils.config_from_keras_model(model_stripped, granularity='model')
config['Model']['Precision'] = 'ap_fixed<16,2>'
config['Model']['ReuseFactor'] = 100
config['Model']['Strategy'] = 'latency'
print("-----------------------------------")
print("Configuration")
plotting.print_dict(config)
print("-----------------------------------")
config = hls4ml.utils.config_from_keras_model(model_stripped, granularity='name')
plotting.print_dict(config)
print("-----------------------------------")
for layer in config['LayerName'].keys():
    config['LayerName'][layer]['Trace'] = True
hls_model = hls4ml.converters.convert_from_keras_model(model_stripped,
                                                       hls_config=config,
                                                       output_dir='model_2/model_2_hls4ml_prj',
                                                       part='xc7a100tcsg324-1')
hls4ml.utils.plot_model(hls_model, show_shapes=True, show_precision=True, to_file=None)
hls4ml.model.profiling.numerical(model=model_stripped, hls_model=hls_model, X=X_test[:1000])

hls_model.compile()
hls4ml_pred, hls4ml_trace = hls_model.trace(X_test[:1000])
keras_trace = hls4ml.model.profiling.get_ymodel_keras(model_stripped, X_test[:1000])
y_hls = hls_model.predict(X_test)

print(' \
############################################# \
#  CONVERSION en HLS                        # \
############################################# \
    ')
import hls4ml

config = hls4ml.utils.config_from_keras_model(model_stripped, granularity='model')
config_cle = config['Model'].items()
print(config_cle)
# KERAS
config['Model']['ReuseFactor'] = 100
config['Model']['Strategy'] = 'resource'

hls_model = hls4ml.converters.convert_from_keras_model(model_stripped,
                                                       hls_config=config,
                                                       output_dir='model_2/model_2_hls4ml_prj',
                                                       part='xc7a100tcsg324-1',
                                                       project_name='model_2_hls4ml_prj',
                                                       )
 
 
 
print("--------KERAS MODEL---------------------------")
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

hls4ml.report.read_vivado_report('model_2/model_2_hls4ml_prj/')


