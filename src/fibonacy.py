"""
f3 = f1 + f2 = 2
f4 = f3 + f2 = 2 + 1 = 3
f5 = f4 + f3 = 3 + 2 = 5
f6 = f5 + f4 = 5 + 3 = 8
f10 = f9 + f8

overlapping subproblems

number_n = 3
memoized --> [None, None, None]
memoized[number_n] == memoized[3] --> out of index

memoized --> [None, None, None, None]
memoized[3] --> no error

top vs botom
top-down

end up the top
"""
def cal_fibo(number_n):
    if number_n == 1 or number_n == 2:
        return 1
    else:
        return cal_fibo(number_n - 1) + cal_fibo(number_n - 2)

def cal_fibo_memoi(number_n, memoized):
    if memoized[number_n] != None:
        return memoized[number_n]
    elif number_n == 1 or number_n == 2:
        return 1
    else:
        result = cal_fibo_memoi(number_n - 1, memoized) \
                                + cal_fibo_memoi(number_n - 2, memoized)
        memoized[number_n] = result
        return result

if __name__ == '__main__':
    number_n = int(input())
    # print(cal_fibo(number_n))
    memoized = [None] * (number_n + 1)
    print(cal_fibo_memoi(number_n, memoized))
