txt = 'there would have been a time for such a word'
path = 'word'

for item in range(len(txt)):
    lenght = 0
    sub = txt[item : item + len(path)]
    if sub == path:
        print("Found:", item)
"""
time complexity: O(N * M)