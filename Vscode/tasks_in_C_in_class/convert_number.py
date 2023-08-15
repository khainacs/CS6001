def conver_number(num,b):
    answer = ""
    remainder = 0
    while num > 0:
        if b > 10:
            print("lon hon 10")
            remaindder = num % b
            if remainder >= 10:
                answer += str(chr( 55 + remainder))
            else:
                answer += str(remainder)
        else:
            answer += str(num % b)
        num  = num // b
        print("num   ", num)
        print("answer   ", answer)
    # return "".join(reversed(answer))
    return answer[::-1]

num = int(input("nhap so nguyen:"))
print("trong he co so 2:", conver_number(num, 2))
print("trong he co so 16:", conver_number(num, 16))
