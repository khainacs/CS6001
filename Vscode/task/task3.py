"""
Problem 3:
    Given a string S which contains N characters come from the set
    {'A', 'C', 'G', 'T'}, in which the character A can be replace by C
    and T is replaceable by G.
    
    Example: ACGT --> CATG
"""
def replace_character(string):
        left = 0
        right = len(string) - 1
        while left <= right:
            if (left == "A" and right == "A") or (left == "C" and right == "C"):
                

if __name__ == "__main__":
    string = ' ACGT'
    
