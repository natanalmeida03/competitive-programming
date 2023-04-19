#BEECROWD DÁ RUNTIME ERROR, POR ALGUM MOTIVO AINDA DESCONHECIDO
import math

A, B, C = input().split(" ")

A = float(A)
B = float(B)
C = float(C)

TRIANGULO = ((A*C)/2)
CIRCULO = (round(math.pi,5)*(C**2))
TRAPEZIO = ((A+B)*C)/2
QUADRADO = B**2
RETANGULO = A*B

print(f'TRIANGULO: {TRIANGULO:.3f}')
print(f'CIRCULO: {CIRCULO:.3f}')
print(f'TRAPEZIO: {TRAPEZIO:.3f}')
print(f'QUADRADO: {QUADRADO:.3f}')
print(f'RETANGULO: {RETANGULO:.3f}')
