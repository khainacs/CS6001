"""
prime number is only divible for 1 and itself
A * B = C
=> B < C or A < C
So we just need check from 2 to A or B
Example 36 = 36 * 1
             18 * 2
             12 * 3
              9 * 4
              6 * 6
              9 * 4
              12 * 3
              18 * 2
              36 * 1
Example 18 = 18 * 1
             9 * 2
             6 * 3
             sqrt(18) * sqrt(18)
             3 * 6
             2 * 9
             1 * 18
A * B = C 
sqrt(A) * sqrt(B) = sqrt(C)

"""
import math
def find_prime_number(number):
    flag = True
    if number <= 1:
        flag = True
    elif number == 2:
        flag = True
    else:
        for index in range((int)(math.sqrt(number)), 2, -1):
            if number % index == 0:
                flag = False
    return flag

    
if  __name__ == '__main__':
    number = int(input())
    if find_prime_number(number) == True:
        print("this number is prime number")
    else:
        print("this number is not prime number")
