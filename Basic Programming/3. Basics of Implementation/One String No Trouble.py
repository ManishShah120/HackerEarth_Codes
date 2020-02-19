str=input()
count=1
lst=list()
for i in range(len(str) - 1):
    if str[i]!=str[i + 1]:
        count+=1
        lst.append(count)
    else:
        lst.append(count)
        count=1
    continue
    lst.append(count)
print(max(lst))