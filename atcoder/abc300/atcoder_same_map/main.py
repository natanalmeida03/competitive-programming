H, W = input().split(" ")

H = int(H)
W = int(W)
A = [[None for c in range(H)] for r in range(W)]
B = [''] * H

for X in range(H):
    input().join(''.join(str(input()) for H in W) for W in A)


for X in range(H):
    B[X]  = list(map(str, input().split(" ")))

for X in range(H):
    B[X] = [item.split('') for item in B]

print(f'A = {A}')

for s in range(W):
    for t in range(H):
        print(f'A[{s}][{t}]')
        if A[s][t] == '#':
            if (A[s][t] == B[s][t]):
                print(f'YES')
            else:
                print(f'NOOOOOO')