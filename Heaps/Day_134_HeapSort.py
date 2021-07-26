def heapify(arr, n, i):
    largest = i
    leftChild = (2*i) + 1
    rightChild = (2*i) + 2

    if leftChild < n and arr[leftChild] > arr[largest]:
        largest = leftChild

    if rightChild < n and arr[rightChild] > arr[largest]:
        largest = rightChild

    if largest != i:
        arr[largest], arr[i] = arr[i], arr[largest]


def heapSort(arr):
    n = len(arr)
    lastLeafNode = n//2 - 1

    for idx in range(lastLeafNode, -1, -1):
        heapify(arr, n, idx)

    for i in range(n-1, 0, -1):
        arr[0], arr[i] = arr[i], arr[0]
        heapify(arr, i, 0)


def printHeap(arr):
    for i in arr:
        print(i, end=" ")


if __name__ == '__main__':
    arr = [12, 11, 13, 5, 6, 7]
    heapSort(arr)
    print(f'Sorted array using HeapSort :', end=" ")
    printHeap(arr)

"""
Heap Sort Algorithm for sorting in increasing order: 
1. Build a max heap from the input data. 
2. At this point, the largest item is stored at the root of the heap. 
    Replace it with the last item of the heap followed by reducing the size 
    of heap by 1. Finally, heapify the root of the tree. 
3. Repeat step 2 while the size of the heap is greater than 1


Space Complexity = O(1)

Time Complexity = O(nLogn) 
    Time complexity of heapify is O(Logn). 
    Time complexity of createAndBuildHeap() is O(n) and 
    the overall time complexity of Heap Sort is O(nLogn).
"""