def average(array):
    # your code goes here
    set1= set(arr)
    sum=0
    count=0
    for i in set1:
        sum+=i
        count+=1
    return sum/count
    
if __name__ == '__main__':
    n = int(input())
    arr = list(map(int, input().split()))
    result = average(arr)
    print(result)