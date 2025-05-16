def count_substring(string, sub_string):
    count=0
    length= len(sub_string)
    
    for i in range(len(string)-length + 1):
        if string[i:i+length]==sub_string:
            count+=1
    
    return count

if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)