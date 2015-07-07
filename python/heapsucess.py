def getheap(a,n):
	start=(n-2)/2
	while(start>=0):
		getdown(a,start,n-1)
		start=start-1;
def getdown(a,start,end):
	root=start
	while(root*2+1<=end):
		child=root*2+1
		if(child+1<=end and a[child]<a[child+1]):
		     child=child+1
		if(a[root]<a[child]):
			swap(a,root,child)
			root=child
		else:
		    return	
def swap(a,i,j):
  temp=a[i]
  a[i]=a[j]
  a[j]=temp

n=input()
a=[]
for i in range(n):
	a.append(input())
getheap(a,n)
end=n-1
while(end>0):
	swap(a,0,end)
	end=end-1
	getdown(a,0,end)
print a	

