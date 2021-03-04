"""
DAY 32 : Multiply two strings.
https://www.geeksforgeeks.org/multiply-large-numbers-represented-as-strings/

QUESTION : Given two numbers as stings s1 and s2. Calculate their Product.

Expected Time Complexity: O(n1* n2)
Expected Auxiliary Space: O(n1 + n2)
where n1 and n2 are sizes of strings s1 and s2 respectively.

Constraints: 
1 <= length of s1 and s2 <= 10**3

"""

def multiplyStrings(s1,s2):   

    if len(s1)==0 or len(s2)==0:
        return 0

    s1_neg = +1
    s2_neg = +1
    if s1[0] == '-':
        s1 = s1[1:]
        s1_neg = -1

    if s2[0] == '-':
        s2 = s2[1:]
        s2_neg = -1

    if int(s1) == 0 or int(s2) == 0:
        return 0

    result = [0] * (len(s1)+len(s2))
    carry = 0

    m = 0
    for i in range(len(s1)-1, -1, -1):
        n1 = ord(s1[i]) - 48
        carry = 0
        n=0
        for j in range(len(s2)-1, -1, -1):
            n2 = int(s2[j])
            sum = n1 * n2 + carry + result[m+n]

            carry = sum // 10
            number = sum % 10 

            result[m+n] = number
            n+=1
            
        if carry > 0:
            result[m+n] = carry

        m+=1

    print(result)
    ans = ""
    sign = s1_neg*s2_neg
    if sign == -1:
        ans+="-"
    k =-1
    while result[k] == 0:
            ans += "" 
            k-=1

    for i in range(len(result)+k, -1, -1):
        ans += chr(result[i] + 48) 

    return ans


    
s1 = '4249994981639334615617229281247863772372537681364035850998024901200639083873' 
s2 = '00503180179103594846929030337949'

print(multiplyStrings(s1, s2))