# we only want to heapify non root/leaf elements
# Formula to find non leaf last element id = (n)/2 -1
# only heapify elements from 0 to (n)/2 -1 in reverse order

# for above eg it will be from indx 0 to 4
# ie from element 1,3,5,4,6 in reverse order


def heapify(arr, n, i):
    largest = i
    leftChild = (2*i) + 1
    rightChild = (2*i) + 2

    if leftChild < n and arr[leftChild] > arr[largest]:
        largest = leftChild

    if rightChild < n and arr[rightChild] > arr[largest]:
        largest = rightChild

    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]
        heapify(arr, n, largest)


def buildHeap(arr):
    n = len(arr)
    lastNonLeaf = n//2 - 1

    for idx in range(lastNonLeaf, -1, -1):
        heapify(arr, n, idx)


def printHeap(arr):
    for i in arr:
        print(i, end=" ")


if __name__ == "__main__":
    arr = [1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17]
    buildHeap(arr)
    print("Max Heap :" , end='')
    print(arr)
