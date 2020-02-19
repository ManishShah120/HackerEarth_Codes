'''
str = input()
ub = 10 ** len(str) - 1
#digits in the string
nums = ''.join(i for i in str if i.isdigit())
numssorted = sorted(nums)
for i in range(1,ub+1):
    allsqr = i*i
    q = sorted(allsqr)
    print(q)
'''
str = input()
ub = 10 **len(str)-1
print(str,ub)
numsinstr = ''.join(i for i in str if i.isdigit())
numssorted = sorted(numsinstr)
print(numssorted)
for i in range(1,ub+1):
    i2 = i*i
    if(i2 < ub):
        pr