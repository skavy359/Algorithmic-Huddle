import numpy
n,m=map(int,input().split())
arr1=[]
for _ in range(n):
    row=list(map(int,input().split()))
    arr1.append(row)
    
print(numpy.max(numpy.min(arr1,axis=1)))