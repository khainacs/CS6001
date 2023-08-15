Sereja = 0
Dima = 0
turn = 0
number_in_card = list(map(int, input().strip(),split()))
left = number_in_card[0]
right = number_in_card[-1]
while left < right:
	if left > right:
		if turn == 0:
			Sereja += left
			turn = 1
		else:
			Dima +=left
		left -= 1
	else:
			if turn == 0:
				Sereja += right
				turn = 1
			else:
				Dima += right
		right -= 1
print(Dima)
priny(Sereja)




