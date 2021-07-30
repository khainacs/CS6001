"""
101  --> 11

step 1:
    101 % 10 == 1
    101 / 10 == 10
    10  % 10 == 0
    10  / 10 == 1
    1   % 10 == 1
    1   / 10 == 0

123  --> 123

1234 = 1 * 10^3 + 2 * 10^2 + 3 * 10^1 + 4 * 10^0

    1234 % 10 == 4 (1)
    123  % 10 == 3 (10)
    12   % 10 == 2 (100)
    1    % 10 == 1 (1000)

counter = 1
clean_number = 0
clean_number += 4 * counter
counter = counter * 10 --> 10
clean_number += 3 * counter 
counter *= 10          --> 100
clean_number += 2 * counter
counter *= 10          --> 1000
clean_number += 1 * counter

12034
    12034 % 10 == 4 (1)
    1203  % 10 == 3 (10)
    120   % 10 == 0 
    12    % 10 == 2 (100)
    1     % 10 == 1 (1000)

counter = 1
clean_number = 0
clean_number += 4 * counter
counter *= 10
clean_number += 3 * counter
counter *= 10   --> (100)
clean_number += 2 * counter
counter *= 10
clean_number += 1 * counter
"""

def remove_zero(number):
    counter = 1
    clean_number = 0
    while number > 0:
        tmp = number % 10
        if tmp != 0:
            clean_number += tmp * counter
            counter *= 10
        number = number // 10
    return clean_number

if __name__ == '__main__':
    number = int(input())
    print(remove_zero(number))

