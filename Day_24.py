"""
DAY 24 : Convert to Roman No.
https://www.geeksforgeeks.org/converting-decimal-number-lying-between-1-to-3999-to-roman-numerals/

QUESTION : Given an integer n, your task is to complete the function convertToRoman which prints the 
corresponding roman number of n. Various symbols and their values are given below.

I 1
V 5
X 10
L 50
C 100
D 500
M 1000

Expected Time Complexity: O(log10N)
Expected Auxiliary Space: O(log10N * 10)

Constraints:
1<=n<=3999

"""

def convertRoman(number):
    roman_value = ""
    while number:

        if number >= 1000:
            roman_value += 'M'
            number = number-1000
    
        elif number >= 900:
            roman_value += 'CM'
            number = number-900
    
        elif number >= 500:
            roman_value += 'D'
            number = number-500
    
        elif number >= 400:
            roman_value += 'CD'
            number = number-400
    
        elif number >= 100:
            roman_value += 'C'
            number = number-100
    
        elif number >= 90:
            roman_value += 'XC'
            number = number-90
    
        elif number >= 50:
            roman_value += 'L'
            number = number-50
    
        elif number >= 40:
            roman_value += 'XL'
            number = number-40
    
        elif number >= 10:
            roman_value += 'X'
            number = number-10
    
        elif number >= 9:
            roman_value += 'IX'
            number = number-9
    
        elif number >= 5:
            roman_value += 'V'
            number = number-5
    
        elif number >= 4:
            roman_value += 'IV'
            number = number-4
    
        elif number >= 1:
            roman_value += 'I'
            number = number-1
    
    return roman_value

