import math

def can_communicate(a, b, c, d):
 
    distance_ac = abs(a - c)

    if distance_ac <= d:
        return True

    distance_ab = abs(a - b)
    if distance_ab <= d:

        distance_bc = abs(b - c)
        if distance_bc <= d:

            return True
    
    return False


a,b,c, d = input().split(" ")

a = int(a)
b = int(b)
c = int(c)
d = int(d)

if can_communicate(a, b, c, d):
    print("Yes")
else:
    print("No")