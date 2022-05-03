n,t = input().split()
s = [x for x in input()]
n = int(n)
t = int(t)

for i in range(t):
    j=0
    while j < n:
        if j<n-1 and s[j] == 'B' and s[j+1] == 'G':
            s[j],s[j+1] = s[j+1],s[j]
            j+=2
        else:
            j+=1


print("".join(s))

