#!/usr/bin/env python3
# coding: utf-8

import sys
import matplotlib.pyplot as plt
import numpy as np
import h5py
from challenges import *

# print(sys.argv)
# if len(sys.argv)<2:
#         print("usage : %s challenge_name"%(sys.argv[0]))
#         sys.exit(1)
# name=sys.argv[1]

name = "ch3"

if name=="ch1" : 
        coords=[]
        color=[]
        p1=0.3
        p2=0.5
        for i in range(10000):
                t=np.random.multivariate_normal([0,4],[[0.4,0.3],[0.3,0.4]])
                coords.append(t)
                color.append(0)
                t=np.random.multivariate_normal([3.4,3.4],[[0.4,0.3],[0.3,0.4]])
                coords.append(t)
                color.append(1)
        
        save_challenge(normalize_coords(coords),color,"ch1")
        plot_challenge(normalize_coords(coords),color,"Challenge 1 : multinomial")

if name=="ch2":
    coords=[]
    color=[]
    for i in range(100):
        for j in range(100):
            coords.append([i,j])
            color.append(0)
            coords.append([i+.5,j+.5])
            color.append(1)
    save_challenge(normalize_coords(coords),color,"ch2")
    plot_challenge(normalize_coords(coords),color,"Challenge 2 : ???")


if name=="ch3":
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

if name=="ch4":
    coords=[]
    color=[]
    for i in range(10000):
        x=np.random.uniform(low=0.0,high=100.0)
        y=np.random.uniform(low=0.0,high=100.0)
        dist=np.sqrt(np.absolute(50-x)**2+np.absolute(50-y)**2)
        coords.append([x,y])
        color.append(int(dist/12)%2)
    
    save_challenge(normalize_coords(coords),color,"ch4")
    plot_challenge(normalize_coords(coords),color,"Challenge 4 : Concentric circles")

if name=="ch5":
    def f(x):
        res=np.exp(-(x - 2) ** 2) + np.exp(-(x - 6) ** 2 / 10) + 1/ (x ** 2 + 1)
        return -1*res

    coords=[]
    color=[]
    for i in range(10000):
        xr=np.random.uniform(low=-4.0,high=10.0)
        yr=np.random.uniform(low=-1.5,high=0.0)
        if f(xr)>yr:
            coords.append([xr,yr])
            color.append(0)
        else:
            coords.append([xr,yr])
            color.append(1)
    
    save_challenge(normalize_coords(coords),color,"ch5")
    plot_challenge(normalize_coords(coords),color,"Challenge 5 : Above/Under func")

if name=="ch6":
    coords=[]
    color=[]
    for i in range(10000):
        x=np.random.uniform(low=0.0,high=100.0)
        y=np.random.uniform(low=0.0,high=100.0)
        coords.append([x,y])
        if int(x/10)%2==0:
            color.append(1)
        else:
            color.append(0)
            
    save_challenge(normalize_coords(coords),color,"ch6")
    plot_challenge(normalize_coords(coords),color,"Challenge 6 : Periodic strips")

if name=="ch7":
    coords=[]
    color=[]
    for i in range(10000):
        x=np.random.uniform(low=0.0,high=100.0)
        y=np.random.uniform(low=0.0,high=100.0)
        dist=np.sqrt(np.absolute(50-x)**2+np.absolute(50-y)**2)
        coords.append([x,y])
        if dist>35:
            color.append(1)
        else:
            color.append(0)
    
    save_challenge(normalize_coords(coords),color,"ch7")
    plot_challenge(normalize_coords(coords),color,"Challenge 7 : Circle")

if name=="ch8":
    coords=[]
    color=[]
    for i in range(10000):
        x=np.random.uniform(low=0.0,high=100.0)
        y=np.random.uniform(low=0.0,high=100.0)
        coords.append([x,y])
        if x>50 and y>50:
                color.append(1)
        elif x<50 and y<50:
                color.append(1)    
        else:
                color.append(0)
    
    save_challenge(normalize_coords(coords),color,"ch8")
    plot_challenge(normalize_coords(coords),color,"Challenge 8 : Panama Flag")
