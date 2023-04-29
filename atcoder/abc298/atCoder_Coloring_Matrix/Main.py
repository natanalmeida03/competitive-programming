import math

rotatecount = 0
def rotate(N, A):

    A_R = [[0 for j in range(N)] for i in range(N)]

    for y in range(N):
        for z in range(N):
            A_R[z][N-1-y] = A_R[y][z]

    return A

def verify(N, A, B):

    global rotatecount

    for x in range(4):
        for i in range(N):
            for j in range(N):
                if A[i][j] == 1 and B[i][j] == 0:
                    if rotatecount == 3:
                        return False
                    else: 
                        A = rotate(N, A)
                
        rotatecount+=1

    return True

N = int(input())
A = [0] * N
B = [0] * N

for X in range(N):
    A[X]  = list(map(int, input().split(" ")))

for X in range(N):
    B[X]  = list(map(int, input().split(" ")))


if verify(N, A, B):
    print("Yes")
else:
    print("No")