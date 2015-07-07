def swap(i, j):                    
    a[i], a[j] = a[j], a[i] 

def heapify(end,i):   
    left=2 * i + 1  
    right=2 * (i + 1)   
    child=i   
    if left < end and a[i] < a[left]:   
        child = left   
    if right < end and a[child] < a[right]:   
        child = right   
    if child != i:   
        swap(i, child)   
        heapify(end, child)   

def getheap():     
    end = len(a)   
    start = end / 2 - 1
    for i in range(start, -1, -1):   
        heapify(end, i)   
    for i in range(end-1, 0, -1):   
        swap(i, 0)   
        heapify(i, 0)   

a = input()
getheap()
print(a)