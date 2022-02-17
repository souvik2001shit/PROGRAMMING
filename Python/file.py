# -*- coding: utf-8 -*-
"""
Created on Wed Jan  5 16:48:04 2022

@author: Souvik
"""

fo=open("F:/file1.txt.txt","r")
print("file name:::",fo.name)
print("file mode:::",fo.mode)
print("is closed:::",fo.closed)
print(fo.read())