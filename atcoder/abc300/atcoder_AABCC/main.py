import math

def isPrime(N1):
    numdiv = 0

    for X in range(1, N1):
        if (N1%X) == 0:
            numdiv += 1

        if numdiv >= 3:
            return False
    
    if numdiv == 2:
        print(f'ok')
        return True

N = int(input())
numInt = 0
res = 0
b = 3
c = 5

while res < N:
    for a in range(2, 14):
        while a < b:
            for b in range(3, 14):
                while b < c:
                    for c in range(5, 14):
                        if isPrime(a) and isPrime(b) and isPrime(c):
                            print(f'({a}**2)*({b})*({c}**2)')
                            res = (a**2)*(b)*(c**2)

                        if res < N:
                            numInt+=1  


print(f'{numInt}')

