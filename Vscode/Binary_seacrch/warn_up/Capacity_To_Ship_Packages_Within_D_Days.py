"""
A conveyor belt has packages that must be shipped from one port to another within days days.

The ith package on the conveyor belt has a weight of weights[i]. Each day,
 we load the ship with packages on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within days days

Note that the cargo must be shipped in the order given

Example 1:
weights = [1,2,3,4,5,6,7,8,9,10], days = 5
solve base on value
max value is 55
lowest value is 10
day = 1
current = 0
step 1: mid = 32 
    day = 1 : 1 2 3 4 5 6 7 
        weights[item] + current > mid
        day += 1
        current = 0
    day = 2
        weights[item] + current < mid
total of day is 2 to deliver weights with mid = 32
and day < days
so right = mid - 1

max value is 31
lowest value is 10
day = 1, current = 0
step 1: mid = 20
    day = 1 : 1 2 3 4 5
        weights[item] + current > mid
            day += 1
            current = 0
    day = 2: 6 7
        weights[item] + current > mid
            day += 1
            current = 0
    day = 3: 8 9
        weights[item] + current > mid
            day += 1
            current = 0
    day = 4: 10
        weights[item] + 10 < mid
total of day is 4 to deliver weights with mid = 20
day < days, so right = mid - 1

max value is 19
lowest value is 10
day = 1, current = 0
step 1: mid = 14
    day = 1: 1 2 3 4
        weights[item] + current > mid
        day += 1
        current = 0
    day = 2: 5 6
        weights[item] + current > mid
        day += 1
        current = 0
    day = 3: 7 
        weights[item] + current > mid
        day += 1
        current = 0
    day = 4: 8
        weights[item] + current > mid
        day += 1
        current = 0
    day 5: 9
        weights[item] + current > mid
        day += 1
        current = 0
    day 6: 10
        weights[item] + current > mid
        day += 1
        current = 0

total of day = 6 to deliver weights with mid = 14
day > days, so left = mid + 1

max value = 19
lowest value = 11
day = 1, current = 0
step 1: mid = 15
    day = 1: 1 2 3 4 5
        weights[item] + current > mid
        day += 1
        current = 0
    day = 2: 6 7
        weights[item] + current > mid
        day += 1
        current = 0
    day = 3: 8
        weights[item] + current > mid
        day += 1
        current = 0
    day = 4: 9
        weight[item] + current > mid
        day += 1
        current = 0
    day = 5: 10
        weights[item] + current > mid
        day += 1
        current = 0
"""
def package_ship(weights, days):
    left = 0
    right = 0
    for item in range(len(weights)):
        right += weights[item]
        if left < weights[item]:
            left = weights[item]
    while left <= right:
        mid = (left + right) // 2
        day = 1
        current = 0
        for item_k in range(len(weights)):
            current += weights[item_k]
            if current > mid:
                day += 1
                current = weights[item_k]
        if day > days:
            left = mid + 1
        else:
            right = mid - 1
    return left

if __name__ == '__main__':
    weights = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    days = 5
    print(package_ship(weights, days))


        
