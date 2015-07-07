
def fun(n,li):
	if(li[n]!=-1):
		return li[n]
	else:
		li[n]=(fun(n-1,li)**2)+fun(n-2,li)
		return li[n]
	return 0
li=[-1]*21
a,b,n=map(int,raw_input().split())

li[1]=a
li[2]=b
li[3]=b**2+a
sum=fun(n,li)
print sum



    
