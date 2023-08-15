"""
input:
	N: solider, size of solider incresed
	M: vests	 size of vest incresed
	X: pointer
	Y: pointer
	the size of the suit is within the range that the soldier can wear.
"""
def find_vests( solider_pointer, vests_pointer, lower, upper):
		solider_pointer = 0
		vests_pointer = 0
		result = []
		while vests_pointer < m_vests and solider_pointer < n_soliders:
			biggest_vest = size_vests + upper
			smallest_vest = size_vests - lower
			if size_vests[pointer] < biggest_vest and size_vests[vests_pointer] > smallest_vest:
				result.append(solider_pointer + 1, vests_pointer + 1)
				vests_pointer += 1
				solider_pointer += 1
			elif smallest_vest > size_vests[vests_pointer]:
					solider_pointer += 1
			elif biggest_vest < size_vests[vests_pointer]
					vests_pointer -= 1
				return result



if name = "_main_":
	upper,lower, n_soliders, m_vests = list(map(int, input().split()))
	size_soliders = list(map(int, input().split()))
	size_vests = list(map(int, input().split()))
	result = find_vests(solider_pointer, vests_pointer, lower, upper)
	print(len(result))
	for results in result:
		print(result[0], result[1])

