t = int(input())
mod = 1e9+7
while t>0:
    t -= 1
    n = int(input())
    n = n*2

    ans = 1
    for i in range(3, n):
        ans = ans*i
    
    print(ans%mod)