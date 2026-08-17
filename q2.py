sum = 0 
V = int(input())
while(V>=1):
    sum += V%10
    # print(f"{V} and {sum}")
    V = V//10
print(sum)