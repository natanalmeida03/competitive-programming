import math

def last_quiz(a, b):

    # a=1 and b=1 so, c=3
    if a == 1 and b == 2 or b == 1 and a == 2:
        return 3 * 1
    
    # a=1 and b=3 so, c=2
    if a == 1 and b == 3 or b == 1 and a == 3:
       return 2 * 1
    
    # a=2 and b=3 so, c=1
    if a == 2 and b == 3 or b == 2 and a == 3:
        return 1 * 1
        
A = int(input(""))
B = int(input(""))

print(last_quiz(A, B))