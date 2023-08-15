testcase = int(input())
for _ in range(testcase):
    n, k = list(map(int, input().split()))
    arr = list(map(int, input().split()))
    flag = k % n
    print(*(arr[n-flag:]+arr[:n-flag]))