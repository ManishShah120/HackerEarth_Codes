length,numberofpages = input().split()
length,numberofpages = [int(length), int(numberofpages)]
if((length <= 23) and (numberofpages > 500 and numberofpages <= 1000)):
    print('Take Medicine')
else:
    print("Don't take Medicine")