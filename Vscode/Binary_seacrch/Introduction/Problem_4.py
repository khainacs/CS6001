"""
Given a sorted array of integers and a target integer, find the first occurrence of the target and return its index.
Return -1 if the target is not in the array

if any number smaller target, will return index + 1
example 7:
  1  3  3  3  3  6  10  10  10 100
       target = 3
       right = len(arr) - 1
       left = 0
step 1: mid = 5
       arr[mid] == target 
          right = mid
          left = 0 
step 2: mid = 2
        arr[mid] == target 
            right = mid 
            left = 0
step 3: mid = 1
        arr[mid] == target 
        right = mid 
        left = 0
step 4 mid = 0
    arr[mid] < target
        right = 1
        left = mid + 1
    
1  3  3  3  6  6  10  10  10  100
target = 3
right = len(num) - 1
left = 0
step 1:  mid = 5
         arr[mid] > target 
            left = mid + 1
            right = len(num) - 1
step 2: mid = 
 """        
def find_index_target(target, array):
    right = len(arr) - 1
    left = 0
    result = -1
    while (right >= left):
        mid = (right + left) // 2
        if (arr[mid] == target):
            right = mid - 1
            result = mid
        elif (arr[mid] < target):
            left = mid + 1
        else:
            right = mid - 1
            
    return result
if __name__ == '__main__':
    arr = [1, 3, 3, 3, 6, 6, 10, 10, 10, 100]
    target = 2
    print(find_index_target(target, arr))

