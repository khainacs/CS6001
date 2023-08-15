def plus_one(digits):
    digits.reverse()
    carry = 1
    result = []
    for i in digits:
        sum = digits[i] + carry
        result.append(sum % 10)
        carry = sum // 10
    while carry > 0:
        result.append(sum % 10)
        carry // 10
    while result[-1] and len(result) > 0:
        result.pop()
    digits.reverse()
    return digits


