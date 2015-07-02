
def fun(n,li):
	if(li[n]!=-1):
		return li[n]
	else:
		li[n]=(fun(n-1,li)**2)+fun(n-2,li)
		return li[n]
	return 0
li=[-1]*21
x=raw_input()
a=int(x[0])
b=int(x[2])
n=int(x[4])
li[1]=a
li[2]=b
li[3]=b**2+a
sum=fun(n,li)
print sum




