line = input()
count = 0
if(line[len(line)-1] == '6' ):
    print(-1)
    exit()
for i in line:
    if (i != '6'):
        count += 1
print(count)