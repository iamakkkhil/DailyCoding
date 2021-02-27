"""
DAY 27 : Validate an IP Address.
https://www.geeksforgeeks.org/program-to-validate-an-ip-address/

QUESTION : Write a program to Validate an IPv4 Address. According to Wikipedia, IPv4 addresses are 
canonically represented in dot-decimal notation, which consists of four decimal numbers, each ranging 
from 0 to 255, separated by dots, e.g., 172.16.254.1 . The generalized form of an IPv4 address 
is (0-255).(0-255).(0-255).(0-255). Here we are considering numbers only from 0 to 255 and any additional 
leading zeroes will be considered invalid.

Your task is  to complete the function isValid which returns 1 if the ip address is valid else returns 0. 
The function takes a string s as its only argument .

Expected Time Complexity: O(N), N = length of string.
Expected Auxiliary Space: O(1)

Constraints:
1<=length of string <=50

"""

def isValid(s):
    counter=0
    for i in range(0,len(s)):
        if(s[i]=='.'):
            counter=counter+1
    if(counter!=3):
        return 0
    st=set()
    for i in range(0,256):
        st.add(str(i))

    counter=0
    temp=""
    for i in range(0,len(s)):
        if(s[i]!='.'):
            temp=temp+s[i]
        else:
            if(temp in st):
                counter=counter+1
            temp=""
    if(temp in st):
        counter=counter+1
    if(counter==4):
        return 1
    else:
        return 0

print(isValid('172.16.254.1'))
