n = int(input())
k = 1
nm = n
sum = 0
pf = []
while k*k <= n:
    if n%k == 0 and k<n:
        sum+=k
        if (not(k == 1) and not(k*k == n)):
            sum+=(int(n/k))
    k+=1
if sum>n:
    print("Ward Overflows")
elif sum<n:
    print("Ward Sealed")
else:
    print("Ward Opens")
    