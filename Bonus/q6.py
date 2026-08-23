n = int(input())
cMax = 1
cCurrent = 1
f = []
for i in range(n):
    a = int(input())
    f.append(a)
    if i == 0:
        continue
    if(f[i] > f[i-1]):
        cCurrent+=1
    else:
        cCurrent = 1
    if cCurrent > cMax:
        cMax = cCurrent
print(cMax)
