"""
https://codeforces.com/contest/1/problem/A
Example:
    6 6 4 --> 4
    theatre: 6x6
    flagstone: 4x4

    8 8 3 --> 9

    8 8 2 --> 16

    5 8 2 --> 12
    a % b == c (c < b)
"""
n, m, a = list(map(int, input().split()))

if n % a == 0:
    num_vertical = n // a
else:
    num_vertical = n // a + 1

if m % a == 0:
    num_horiz = m // a
else:
    num_horiz = m // a + 1

total = num_vertical * num_horiz
print(total)
