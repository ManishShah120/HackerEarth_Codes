n,q = map(int,input().split())
arr = list(map(int,input().split()))
for i in range(q):
    f1,f2,f3 = map(int,(input().split()))
    if(f1 == 1):
        arr[f2] = f3
    else:
        print(sum(arr[f2:f3+1]))