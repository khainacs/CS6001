"""
Given an array of positive integers nums and a positive integer target.
return the minimal length of a contiguous subarray
[numsl, numsl+1, ..., numsr-1, numsr] of which the sum is greater than or equal to target. 
If there is no such subarray, return 0 instead.
Example 1:

Input: target = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: The subarray [4,3] has the minimal length under the problem constraint.
num is sorted => [1,2,2,3,3,4]
step 1:  left = 0, right = 5
        if left + right = 5 < target
            left + 1
step 2: if left + right = 6 < target
            left + 1
        ....
step 5:  left = 4, right = 5
        left + right == target
            left + 1 == right
Example 2:
Input: target = 4, nums = [1,4,4]
Output: 1

Example 3:
Input: target = 11, nums = [1,1,1,1,1,1,1,1]
Output: 0
"""
def subarray(nums, target):
    left = 0
    right = len()
