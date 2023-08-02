def bubbleSort(arr):
    n = len(arr)
    swapped = False
    for i in range(n-1):
        for j in range(0, n-i-1):
            if arr[j] > arr[j + 1]:
                swapped = True
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
         
        if not swapped:
            return

arr = [] 
n = int(input("enter size of array - "))
for i in range(0, n):
    a = input("enter element no %d - " %(i+1));
    arr.append(a)
bubbleSort(arr)
print("Sorted array is: - ")
print(arr)