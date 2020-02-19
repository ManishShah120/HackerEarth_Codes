#lst = list()
x,k = input().split()
x,k = [int(x),int(k)]
count = 0
digits = [int(d) for d in str(x)]
for i in range(0,len(digits)):
    if(count != k):
        if(digits[i] != 9):
            digits[i] = 9
            count = count +1
num =int(''.join(map(str,digits)))
print(num)