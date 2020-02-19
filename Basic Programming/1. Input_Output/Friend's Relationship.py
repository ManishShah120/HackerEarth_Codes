t = int(input())
for i in range(t):
    n = int(input())
    for i in range(1,n+1):
        print("*"*i + "#"*((n*2)-2*i) + "*"*i)