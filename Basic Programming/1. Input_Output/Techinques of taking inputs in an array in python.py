n,q = input().split()
n,q = [int(n),int(q)]
list = []
for i in range(n):
    list.append(int(input()))
print(list)

'''
another technique of taking input as an array:-
def Solve (k, arr):
    # Write code here


n = int(input())
k = int(input())
arr = map(int, input().split())

out_ = Solve(k, arr)
print (out_)
'''





arr = list(map(int,input().split()))