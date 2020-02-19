n,q = input().split()
n,q = [int(n),int(q)]
list = []
for i in range(n):
    list.append(int(input()))
for i in range(q):
    l,r = input().split()
    l,r = [int(l),int(r)]
    ans = list[l-1]+list[r-1]
    print(ans//2)