"""
"""
a = float(input())
b = float(input())
c = float(input())


max_value = a
if max_value < b:
    max_value = b
if max_value < c:
    max_value = c
print(f"Max value is: {max_value}")
