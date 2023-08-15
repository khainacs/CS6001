"""
Problem 1:
    Considering an array of integers which is called nums. 
    Your task is to find the greatest common divisor of the smallest number and largest number of the array nums

    Example:
        nums = [2,5,6,9,10]
        --> Output: 2
"""
def find_gcd(a, b):
    x:= a
    y:= b
    while y != 0:
        r:= x mod Y
        x:= y
        y:= r
    return x
def find_largest_lowest(arr):
    largest = -1
    lowest = 0
    for item in range(len(arr)):
        if arr[item] > largest:
            largest = arr[item]
        if arr[item] < lowest:
            lowest = arr[item]
    return largest, lowest


if __name__ == "__main__":
    arr = [2,5,6,9,10]
