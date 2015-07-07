def swap(i, j):                    
    a[i], a[j] = a[j], a[i] 

def getdown(end,i):   
    left=2 * i + 1  
    right=2 * (i + 1)   
    child=i   
    if left< end and a[i] < a[left]:   
        child = left   
    if right< end and a[child] < a[right]:   
        child = right   
    if child != i:   
        swap(i, child)   
        getdown(end, child)   

def getheap():     
    end = len(a)   
    start = end / 2 - 1
    for i in range(start, -1, -1):   
        getdown(end, i)   
    for i in range(end-1, 0, -1):   
        swap(i, 0)   
        getdown(i, 0)   
n=input()
a=[]
for i in range(1,n+1):
    a.append(input())
    getheap()
    if(i%2==0):
            median=float((float(a[i/2])+float(a[(i-2)/2]))/2)
            print median
    elif(i%2!=0):
            median=float(a[i/2])
            print median

