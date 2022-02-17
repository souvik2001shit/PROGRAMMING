# -*- coding: utf-8 -*-
"""
Created on Tue Jan 11 19:57:46 2022

@author: Souvik
"""

d1={"a":"soham","b":162,"c":73.45}
print(d1)
x1=d1["a"]
print(x1)
x=d1.get("c")
print(x)
d1["a"]="souvik"
print(d1)
for i in (d1):
  print(d1)
for i in   d1:
    print(d1[i])
for i in d1.values():
   print(i)
for x,y in d1.items():
 print(x,y)
if "d" in d1:
    print("key is present")
else:
    print("key is not present")
print(len(d1))
d1={"a":"soham","b":162,"c":73.45}
d1["d"]="a"
print(d1)
d1.pop("d")
print(d1)
d1={"a":"soham","b":162,"c":73.45}
d1.popitem()
print(d1)
d1={"a":"soham","b":162,"c":73.45}
del d1["b"]
print(d1)
d1.clear()
print(d1)
d1={"a":"soham","b":162,"c":73.45}
d2=d1.copy()
print(d2)