'''QUESTION:

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
Bonus: Can you do this in one pass?'''


arr = [10, 15, 3, 7]
k = 17


def pair():

    result = False
    for i in range(len(arr)-1):
        d = k - arr[i]

        if d in arr[i+1::1]:
            result = True
            break

    return result

print(pair())

