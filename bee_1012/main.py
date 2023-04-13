#BEECROWD DÁ RUNTIME ERROR, POR ALGUM MOTIVO AINDA DESCONHECIDO
import math

A = float(input(""))
B = float(input(""))
C = float(input(""))

TRIANGULO = ((round(A, 1)*round(C, 1))/2)
CIRCULO = (round(math.pi,5)*(round(C, 1)**2))
TRAPEZIO = ((round(A, 1)+round(B, 1))*round(C, 1))/2
QUADRADO = round(B, 1)**2
RETANGULO = round(A, 1)*round(B, 1)

print(f'TRIANGULO: {TRIANGULO:.3f}')
print(f'CIRCULO: {CIRCULO:.3f}')
print(f'TRAPEZIO: {TRAPEZIO:.3f}')
print(f'QUADRADO: {QUADRADO:.3f}')
print(f'RETANGULO: {RETANGULO:.3f}')