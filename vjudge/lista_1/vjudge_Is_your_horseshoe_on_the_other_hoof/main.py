S = []
comp = 0

S = input().split(" ")

S.sort()

for i in range(3):
    if S[i] == S[i+1]:
        comp+= 1

print(comp)