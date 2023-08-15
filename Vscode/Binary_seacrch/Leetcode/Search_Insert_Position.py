"""
Given a sorted array of distinct integers and a target value, 
return the index if the target is found. 
If not, return the index where it would be if it were inserted in order.
You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [1,3,5,6], target = 5
Output: 2
step 1: mid = 1
            array[mid] < target 
               left = mid + 1
step 2: mid = 2
            array[mid] == target 
            return left 

Example 2:
Input: nums = [1,3,5,6], target = 2
Output: 1
step 1: mid = 1
            arr[mid] > target
                right = mid - 1
step 2: mid = 0
        arr[mid] < target
        return left + 1
Example 3:
Input: nums = [1,3,5,6], target = 7
Output: 4
"""
def search_insert(num, target):
    left = 0
    right = len(num) - 1
    while (right >= left):
        mid = (left + right) // 2
        if (num[mid] == target):
            return mid 
        elif (num[mid] > target):
            right = mid - 1
        else:
            left = mid + 1
    return left
    
if __name__ == '__main__':
    num = [1, 2, 3, 4, 6, 7, 8, 9]
    target =  6
    print(search_insert(num, target))