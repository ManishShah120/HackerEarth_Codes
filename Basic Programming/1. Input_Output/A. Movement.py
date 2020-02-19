n = int(input())
m=n
sum = 0
if (n<5):
    print(1)
else:
    n = n // 5
    if(m%5 == 0):
        print(n)
    else:
        print(n+1)