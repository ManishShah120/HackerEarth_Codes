while(True):
    try:
        x, y = input().split()
        x, y = [int(x), int(y)]
        print(x + y)
    except:
        break