'''
n = int(input())
list = []
sum = 0
for i in range(1,n+1):
    list.append(int(input()))
print(list)
for i in range(1,n+1):
'''
N = int(input())
arr = list(map(int, input().split()))
lastnum = 0
current_slice = 1
while (lastnum + current_slice + 1) < N:
    current_slice = current_slice + 1
    lastnum = lastnum + current_slice

s = sum(arr[0:(lastnum + 1)])
maximum = s
for start in range(1, N):
    if ((lastnum + 1) < N):
        s = s - arr[start - 1] + arr[lastnum + 1]
        lastnum = lastnum + 1

    else:
        s = s - arr[start - 1] - sum(arr[(lastnum - current_slice + 2):(lastnum + 1)])
        lastnum = lastnum - current_slice + 1
        current_slice = current_slice - 1

    if s > maximum:
        maximum = s

print(maximum)

# Copied!!!!!!!!!!!!! The above code is copied from one of the hackerEarth user