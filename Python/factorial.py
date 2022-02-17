# -*- coding: utf-8 -*-
"""
Created on Tue Dec 14 15:31:56 2021

@author: Souvik
"""

n=int (input("Enter an intiger :  "))
if n>1 :
    for p in range(1,n):
        n=n*p;
    print("Your answer(factorial of given intiger) is : ",n);
if n==0 :
    print("Your answer(factorial of given intiger) is : 1");
if n==1 :
    print("Your answer(factorial of given intiger) is : 1" );