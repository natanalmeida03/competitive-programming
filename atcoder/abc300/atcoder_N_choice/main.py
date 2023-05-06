N, A, B = input().split(" ")
C = []

N = int(N)

C  = input().split(" ")

A = int(A)
B = int(B)

SOMA = A+B

for x in range(N):
    if SOMA == int(C[x]):
        print(f'{x+1}')