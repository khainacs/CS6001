
import prime_handler

if __name__ == '__main__':
    n = int(input())

    #find n1
    n1 = None
    for number in range(n - 1, 1, -1):
        if prime_handler.is_prime(number):
            n1 = number
            break
    print(n1)


    #find n2
    n2 = None
    counter = n + 1
    while True:
        if prime_handler.is_prime(counter):
            n2 = counter
            break
    print(n2)