"""
def findDivisors(n1, n2):
    
	   Returns a tuple containing all comon divisors of n1 & n2"
        
	 divisors = () #the empty tuple
	 for i in range(1, min (n1, n2) + 1):
	 	if n1%1 == 0 and n2%i == 0:
	 		divisors = divvisors + (i,)
	 return divisors

divisors = findDivisors(20, 100)
print divisors
total = 0 
for d in divisors:
	total += d
	print total
"""
print("hello", "enter h", end = " ", "hello"  )
