#runtime error
#Traceback (most recent call last):
#File "/judge/judge-517331b1f6c34f809b48084b79de46f6.d/Main.py", line 3, in <module>
#x1 = float(input(""))
#ValueError: could not convert string to float: *******

import math

x1 = float(input(""))
y1 = float(input(""))
x2 = float(input(""))
y2 = float(input(""))

res = math.sqrt(((x2-x1)**2 + (y2-y1)**2))

print(f'{res:.4f}')