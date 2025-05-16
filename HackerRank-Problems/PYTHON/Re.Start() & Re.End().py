import re 
S = input()
K = input()

matches = list(re.finditer(f'(?={K})', S))

if not matches:
    print((-1,-1))
else:
    for match in matches:
        print((match.start(),match.start() + len(K) - 1))