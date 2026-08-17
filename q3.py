max = 0
M = int(input())
while(M):
    length = int(input())
    if (length%2 != 0 and length > max):
        max = length
    M-=1
if(max):
    print(max)
else: 
    print("All Even")
