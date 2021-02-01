"""
DAY 1:

QUESTION : Given a number N, print all numbers in the range from 1 to N having 
exactly 3 divisors.

Expected Time Complexity : O(N1/2 * N1/4)
Expected Auxilliary Space :  O(1)

Constraints :
1 <= N <= 10**9

"""

number = 100

def exactly_3_divisors(number):

    for i in range(2, int(number**0.5)+1):
        flag = 0
        for j in range(2, int(i**0.5)+1):
            if i%j == 0:
                flag = 1
                break
                
        if flag == 0:
            print(i*i)

exactly_3_divisors(number)