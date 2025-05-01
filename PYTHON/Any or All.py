N = int(input())
arr = list(map(int,input().split()))

print(all(i>0 for i in arr) and any(str(i)[::-1]==str(i) for i in arr))