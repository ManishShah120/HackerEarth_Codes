countz = 0
counto = 0
inputlelo = input()
for i in inputlelo:
    if(i == 'z' or i == 'Z'):
        countz = countz + 1
    if(i == 'o' or i == 'O'):
        counto = counto + 1
if(2*countz == counto):
    print('Yes')
else:
    print('No')