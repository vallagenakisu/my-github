a = input()
balance = 0
i = 0
j = 0
res = []
    
while i < len(a):
    if a[i] == 'L':
        balance += 1
    elif a[i] == 'R':
        balance -= 1
        i += 1
        
    if balance == 0:
        temp = a[j:i]
        res.append(temp)
        j = i
    
print(len(res))
for item in res:
    print(item)