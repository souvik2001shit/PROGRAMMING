# -*- coding: utf-8 -*-
"""
Created on Wed Jan 12 14:36:58 2022

@author: Souvik
"""

def isPalindrome(s):
    s = s.lower()
    l = len(s)
    if l < 2:
        return True
    elif s[0] == s[l - 1]:

        return isPalindrome(s[1: l - 1])

    else:
        return False


s = input("Enter string : ")
ans = isPalindrome(s)

if ans:
    print("Yes")
else:
    x = 0
    y = len(s)-1
    while(x < y):
        if s[x] == s[y]:
            x += 1
            y -= 1

        else:
            break
    print("Not palindrom at position : ", x+1)
          
          
          