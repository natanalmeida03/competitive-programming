n1 = int(input())
res = 0

for x in range(1, n1+1):
    x = ((-1)**x) * x
    res = res + x

print(f'{res}')