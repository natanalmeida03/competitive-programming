import math

def is_girl(a):
    #calculate teh string length
    leng = len(a)

    #sort
    a = sorted(a)
    a = ''.join(a)

    count = 0
    if leng == 1:
        return 1*1
    #loop for eliminate the equal letters
    for x in range(leng - 1):
        if a[x] == a[x+1]:
            newword = a.replace(a[x],"")
            count+=1
    
    return (len(newword) + count)*1


name = input("")

if (is_girl(name)%2 == 0):
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")