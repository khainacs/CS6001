Sereja = 0
Dima = 0
turn = 0
cards = int(input())
number_in_card = list(map(int, input().split()))
left = 0
right = cards -1
while left < right:
	if turn == 0:
		if number_in_card[left] > number_in_card[right]:
			Sereja += number_in_card[left]
			left +=1
		else:
			Sereja += number_in_card[right]
			right -= 1
		turn = 1
	else:
		if number_in_card[left] > number_in_card[right]:
			Dima += number_in_card[left]
			left += 1

		else:
			Dima += number_in_card[right]
			right -= 1
		turn = 0

print(f"{Sereja} {Dima}")


