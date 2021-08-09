n = int(input())
flag = True
for index in range (sqrt(n), 2, -1):
    if n  % index == 0:
        flag = False
        break


if flag == True:
  print("n is a primer number")
else:
    print("n is not a primer number")



counter = True
for index_k in range (n -1, 1, -1):
    flag = True
    for index in range (2, sqart(inex_k)):
        if index_k % index == 0:
            flag = False
            break
    if flag == True: 
        n1 = index_k
        break
print (f"n1 is {n1}")


counter = n + 1
while True:
    flag = True
    for index in range(2, sqart(counter)):
        if  counter % index == 0:
            flag = False
            break
    if flag == True:
        n2 = counter
        break
print(f,"n2 is {n2}")







