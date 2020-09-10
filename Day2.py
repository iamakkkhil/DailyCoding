""" QUESTION 2:

Given an array of integers, return a new array such that each element at index i of the new array is the product 
of all the numbers in the original array except the one at i.
For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. If our input 
was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division? """


# LOGIC 1

def prod(arr):
    temp = 1
    lst = []

    for i in range(len(arr)):
        for j in range(len(arr)):
            if i != j:
                temp *= arr[j]
        lst.append(temp)
        temp = 1

    return lst


# LOGIC 2

def prod_list(arr):
    prod_arr = []

    for i in range(len(arr)):
        temp = arr.pop(i)
        prod = 1

        for j in arr:
            prod *= j

        prod_arr.append(prod)
        arr.insert(i, temp)

    return prod_arr


a = [1, 2, 3, 4, 5]

print(prod_list(a))

print(prod(a))
