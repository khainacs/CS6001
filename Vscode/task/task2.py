"""
Problem 2:
    Given an array of integers which is called nums.
    Your task is to sort all the prime numbers in the array
    in descending order.
       Example:
        nums = [7, 4, 2, 5, 13]
        --> outputs: [2, 4, 5, 7, 13]

"""

import math

def find_prime_number(number):
    if number <= 1:
        return False
    else:
        for item in range(sqrt(number), 2, -1):
            if number % item == 0:
                return False
    return True

def sort_arr(arr):
    v = []
    for i in range(0, n):
        if find_prime_number[arr[i]]:
            v.append(arr[i])
 
    v.sort(reverse = True)
    j = 0
    for i in range(0, n):
        if prime[arr[i]]:
            arr[i] = v[j]
            j += 1
             
    return arr
if __name__ == "__main__":
    arr = [7, 4, 2, 5, 13]