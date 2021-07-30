import math

def is_prime(number):
    """
    @description:
        -) to consider a number is a prime or not
    @arguments:
        -) number: positive integer number
    @returns:
        -) Return True if the number is a prime. Otherwise, return False
    """
    for index in range(2, math.sqrt(number)):
        if number % index == 0:
            return False
    return True