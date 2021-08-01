print("enter value n:")

flag = True
n = int(input())
if n == 2:
    flag = True
if n < 2:
    flag = False
if n % 2 == 0:
     flag = False
else:
    for i in range (3, n, 2):
            if n % i == 0:
                flag = False
                
if flag == True:
    print ("n is prime number")
else:
    print ("n is not prime number")
        
       
     
