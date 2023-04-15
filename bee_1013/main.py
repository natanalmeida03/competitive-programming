#reuntime error
#Traceback (most recent call last):
#File "/judge/judge-12c0d5d952c34cba98e04db81ed826dc.d/Main.py", line 1, in <module>
#A = int(float(input("")))
#ValueError: could not convert string to float: *******

A, B, C = input("").split(" ")

A = int(A)
B = int(B)
C = int(C)

LISTA = [A, B, C]

LISTA.sort()

print(f'{LISTA[2]} eh o maior')