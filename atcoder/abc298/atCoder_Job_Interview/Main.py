import math

def interview(N, S):

    Numo = 0

    for X in range(N):
        if S[X] == "x":
            return False
        if S[X] == "o":
            Numo += 1

    if Numo >= 1:
        return True
    
    return False

N = int(input(""))
S = input("")

if interview(N, S):
    print("Yes")
else:
    print("No")