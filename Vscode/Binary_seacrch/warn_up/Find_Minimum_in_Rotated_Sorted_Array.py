"""
Suppose an array of length n sorted in ascending order is rotated between 1 and n times.
Given the sorted rotated array nums of unique elements, return the minimum element of this array.

[3,4,5,1,2]
left = 0
right = len(arr) - 1
step 1: mid = 2
        arr[mid] > arr[mid + 1] and arr[mid] > arr[mid - 1] 
            left = mid + 1
step 2: mid = 3
        arr[mid] < arr[mid + 1] and arr[mid] < arr[left]
            return mid

[4,5,6,7,0,1,2]
left = 0 
right = len(arr) - 1
step 1: mid = 3
        arr[mid] > arr[left]
            left = mid + 1
step 2: mid = 5
        arr[mid] < arr[mid + 1]
            right = mid - 1
step 3: mid = 4
        arr[mid] < arr[mid + 1] and arr[mid] < arr[mid - 1]
            
[11,13,15,17]
left = 0 
right = len(arr) - 1
step 1: mid = 1
        arr[mid] < arr[mid + 1]
"""
 def find_minimum_element(arr):
        right = len(arr) - 1
        left = 0
        while right >= left:
                mid = (right + left) // 2
                if arr[mid] < arr[mid - 1]:
                        return arr[mid]
                elif arr[mid] >= arr[left] and arr[mid] > arr[right]:
                        left = mid + 1
                else:
                        right = mid + 1