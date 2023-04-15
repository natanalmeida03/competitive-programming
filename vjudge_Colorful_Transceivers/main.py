import math

def can_communicate(a, b, c, d):
    # calculate the distance between A and C
    distance_ac = abs(a - c)

    # if A and C are within direct communication range, return True
    if distance_ac <= d:
        return True

    # otherwise, check if A and B can communicate
    distance_ab = abs(a - b)
    if distance_ab <= d:
        # if A and B can communicate, check if B and C can communicate
        distance_bc = abs(b - c)
        if distance_bc <= d:
            # if B and C can communicate, return True
            return True
    
    # if A and C cannot communicate directly or indirectly, return False
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