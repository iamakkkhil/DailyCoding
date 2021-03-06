"""
DAY 34 : Excel Sheet | Part 1.
geeksforgeeks.org/find-excel-column-name-given-number/

QUESTION : Given a positive integer N, return its corresponding column title as it would appear in an Excel sheet.
For N =1 we have column A, for 27 we have AA and so on.

Note: The alphabets are all in uppercase.

Expected Time Complexity: O(Log(N))
Expected Auxiliary Space: O(Log(N))

Constraints:
1 ≤ N ≤ 107

"""

def ExcelColumn(number):
    string = ""

    while number>0:
        rem = number % 26

        if rem == 0:
            string += 'Z'
            number = (number//26) - 1
        else:
            string += chr((rem-1) + ord('A'))
            number = number//26  

    return string[::-1]


print(ExcelColumn(51))