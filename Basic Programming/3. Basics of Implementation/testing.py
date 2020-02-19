def mys(m):
  if m == 1:
    return(1)
  else:
    return(m+mys(m-1))

for i in range(1,10):
    print(i,mys(i))

1+2+3+4