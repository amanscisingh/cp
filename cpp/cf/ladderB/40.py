s = input()
hm = {
    '>': "1000",   
    '<' : "1001",
    '+' : "1010",
    '-' : "1011",
    '.' : "1100",
    ',' : "1101",
    '[' : "1110",
    ']' : "1111"
}

ss = ""

for i in range(len(s)) :
    ss += hm[s[i]]

ans = 0
t=0
for i in range(len(ss)-1, -1, -1) :
    ans += 2**t if ss[i] == '1' else 0
    t+=1
    ans %= 1000003

print(ans)