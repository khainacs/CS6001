list_number = lis(int(input()))
largest_odd_number = 0
for index in range(list_number):
	if largest_odd_number > index & largest_odd_number % 2 != 0:
		largest_odd_number = index
