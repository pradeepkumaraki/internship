def maxsubarray(L):
  sum = 0
  cindex = -1
  bsum = 0
  bstartindex = -1
  bendindex = -1
  flag=0
  neg=L[0]
  for i in range(len(L)):
    val = sum + L[i]
    if val > 0:
        if sum == 0:
          cindex = i
        sum = val
    else:
      sum = 0
      flag+=1
      if(L[i]>neg):
        neg=L[i]
 
    if sum > bsum:
      bsum = sum
      bstartindex = cindex
      bendindex = i
  if(flag==len(L)):
    return neg
  else:
    return sumof(L[bstartindex:bendindex+1])  
def sumof(l):
  sum=0
  for i in range(len(l)):
      sum=sum+l[i]
  return sum
def noncontinuous(L):
    sum=0
    flag=0
    neg=L[0]
    for i in range(len(L)):
       if(L[i]>0):
        sum=sum+L[i]
       else:
        flag+=1
        if(neg<L[i]):
          neg=L[i]
    if(flag==len(L)):
      return neg
    else:
      return sum
num=input()
for i in range(0,num):
   n=input()
   L=map(int,raw_input().split())
   print maxsubarray(L),noncontinuous(L)
 #  print noncontinuous(L)