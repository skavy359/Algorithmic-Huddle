n=int(input())
s=set()
while(n>0):
    name=str(input())
    s.add(name)
    n=n-1
print(len(s))