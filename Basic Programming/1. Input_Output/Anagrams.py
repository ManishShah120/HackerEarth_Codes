t = int(input())
for i in range(t):
    str1 = input()
    str2 = input()
    str11 = sorted(str1)
    str21 = sorted(str2)
    sum = 0
    for i in str11:
        key = i
        for j in str21:
            if (key == j):
                sum = sum + 1
    print(sum)
    ans = ((len(str1) + len(str2)) - (2*sum))
    print(ans)