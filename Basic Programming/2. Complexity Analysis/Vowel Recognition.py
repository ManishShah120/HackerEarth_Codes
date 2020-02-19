t = int(input())
for p in range(t):
    count = 0
    str = input()
    substrings = [str[i:j]
    for i in range(len(str))
        for j in range(i+1,len(str)+1)
                  ]
    for r in range(len(substrings)):
        for q in substrings[r]:
            if q == 'a' or q == 'e' or q == 'i' or q == 'o' or q == 'u' or q == 'A' or q == 'E' or q == 'I' or q == 'O' or q == 'U':
                count = count + 1
    print(count)