t = int(input())

hm = {}
# hm[1] = 1
for i in range(2, 32):
    hm[2**i] = 1


# print(hm)

while(t) :
    n = int(input())
    fact = [1,2]
    fct = 6
    i = 4
    while fct <= n:
        fact.append(fct)
        fct *= i
        i+=1

    ans = 2**31

    def recur(fact, i, cnt, n):
        global ans
        if i == len(fact):
            if n in hm:
                cnt+=1
                ans = min(ans, cnt)
                
            return 

        print(n, fact[i])
        if n in hm:
            cnt+=1
            ans = min(ans, cnt)
            return 


        if fact[i] > n:
            return

        # take or leave
        recur(fact, i+1, cnt, n)
        recur(fact, i+1, cnt+1, n-fact[i])
        return


    
    recur(fact, 0, 0, n)      
    print("--",ans)

    t-=1