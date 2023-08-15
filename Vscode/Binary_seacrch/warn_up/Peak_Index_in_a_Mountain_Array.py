"""
Let's call an array arr a mountain if the following properties hold:
arr.length >= 3
There exists some i with 0 < i < arr.length - 1 such that:
arr[0] < arr[1] < ... arr[i-1] < arr[i]
arr[i] > arr[i+1] > ... > arr[arr.length - 1]
Given an integer array arr that is guaranteed to be a mountain, return any i such that arr[0] < arr[1] < ... arr[i - 1] < arr[i] > arr[i + 1] > ... > arr[arr.length - 1].

 

Example 1:
Input: arr = [0,1,0]
right = len(arr) - 1
left = 0
step 1: mid = 1
        arr[mid] > a[mid + 1] && arr[mid] > arr[mid - 1]
            result = mid
            right = mid - 1
step 2: mid = 0
        arr[mid] < arr[mid + 1]

Example 2:
Input: arr = [0,2,1,0]
right = len(arr) - 1
left = 0
step 1; mid = 1 
        arr[mid] > arr[mid + 1] && arr[mid] > arr[mid -1]
            result = mid
            right = mid - 1
step 2: mid = 0
        arr[mid] < arr[mid + 1]

Example 3:
Input: arr = [0,10,5,2]
right = len(arr) - 1
left = 0
step 1: mid = 1
        arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]
            result = mid
            right = mid - 1
step 2: mid = 0
        arr[mid] < arr[mid + 1]


Example 4:
Input: arr = [3,4,5,1]
left = 0
right = len(arr) - 1
step 1: mid = 1
        ar[mid] < arr[mid + 1]
            left = mid
step 2: mid = 2
        arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]
        return index
Example 5:
Input: arr = [24,69,100,99,79,78,67,36,26,19]
left = 0
right = len(arr) - 1
step 1: mid = 4
        arr[mid] < arr[mid - 1]
            right = mid
step 2: mid = 2
        arr[mid] > arr[mid + 1] && arr[mid - 1]

"""
def peak_index_mountain_array(arr):
    left = 0
    right = len(arr) - 1
    while right >= left:
        mid = (left + right) // 2
        if (arr[mid] > arr[mid + 1]) and (arr[mid] > arr[mid - 1]):
            return mid
        elif arr[mid] < arr[mid + 1]:
            left = mid
        else:
            right = mid
    return none
if __name__ == '__main__':
    arr = [0, 2, 1, 0]
    print(peak_index_mountain_array(arr))