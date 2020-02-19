t = int(input())
for i in range(t):
    s1, s2 = input().split()
    s1sorted = sorted(s1)
    s2sorted = sorted(s2)
    if(s1sorted == s2sorted):
        print('YES')
    else:
        print('NO')