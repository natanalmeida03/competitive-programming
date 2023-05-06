N = int(input(""))

if (N>60):
    SEGUNDOS = (N%60)
    N = N-SEGUNDOS
    MINUTOS = int(N/60)
    if(MINUTOS > 60):
        MINUTOS = (MINUTOS%60)
        N = N-(MINUTOS)
        HORA = int(N/3600)
        print(f'{HORA}:{MINUTOS}:{SEGUNDOS}')
    else:
        print(f'0:{MINUTOS}:{SEGUNDOS}')
else:
    print(f'0:0:{N}')