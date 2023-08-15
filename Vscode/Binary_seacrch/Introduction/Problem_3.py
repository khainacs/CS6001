"""
Given an array of integers sorted in increasing order and a target, 
find the index of the first element in the array that is larger than or equal to the target.
Assume that it is guaranteed to find a satisfying number.
1  3  3  5  8  8  10
target = 2
right = len(arr) - 1
left = 0
step 1: mid = 3
        if arr[mid] >= target
            reuslt = mid
            right = mid - 1
            left = 0
step 2: mid = 1
        if arr[mid] >= target
        reuslt = mid 
        right = mid - 1
        left = 0
step 3: mid = 0
        if arr[mid] < target
        return result
1  2  3  4  5  6  7  8  9  10
target = 10
left = 0
right = len(arr) - 1
step 1: mid = 5
        arr[mid] < target 
       
        left = mid + 1
        right = len(num) - 1
step 2: mid = 7
        arr[mid] < target
        
        left = mid + 1
        right = len(num) - 1
step 3: mid = 8
        arr[mid] < target
        left = mid + 1
        right = len(num) - 1
step 4: mid = 9
        arr[mid] == target
        result = mid
        return result
"""
def find_index_target(arr, target):
    left = 0
    right = len(arr) - 1
    result = -1
    while (right >= left):
        mid = (left + right) // 2
        if (arr[mid] >= target):
            result = mid
            right = mid - 1
        else:
            left = mid + 1
    return result

if __name__ == '__main__':
    arr = [1, 2, 2, 4, 5, 6, 7, 8, 9, 10]
    target = 3
    print(find_index_target(arr, target))
