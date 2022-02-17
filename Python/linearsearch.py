# -*- coding: utf-8 -*-
"""
Created on Tue Dec 14 16:14:48 2021

@author: Souvik
"""

list=[]
list=[item for item in input("Enter the list items : ").split()]
print(list)
def search(list,n):

    for i in range(len(list)):
        if list[i] == n:
            return True
    return False
  

n = input("Enter item to search : ")

  
if search(list, n):
    print(" Item is found in the list." )
else:
    print(" Item Not Found in the list")