t = int(input())
while(t): 
    reversedNum = 0
    givenNum = int(input())
    # givenNum = 7
    n = givenNum
    div = 10**(len(str(givenNum)) - 1)
    nDigits = 1
    while(nDigits<=n):
        #print(f"{givenNum%10} * {div}")
        reversedNum += div*(givenNum%10)
        div/=10  
        nDigits*=10
        #print(f"ndigits = {nDigits}")
        givenNum = givenNum//10
        #print(reversedNum)
    print(int(reversedNum))
    t-=1