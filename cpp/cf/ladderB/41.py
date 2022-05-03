from re import T


s = input()

ans = ""
if s[0] == '-':
    s = s[1:]
    if s.count('.') == 1:
        temp = s.split('.')
        p1 = temp[0]
        p2 = temp[1][:2]
        p2 = p2 if len(p2) == 2 else p2 + '0'
        t=""
        p1 = p1[::-1]
        for i in range(0,len(p1), 3):
            t += p1[i:i+3]
            t += ','
        
        t = t[:-1]
        t = t[::-1]
        ans += '(' + '$' + t + '.' + p2 + ')'
    else:   
        t=""
        s = s[::-1]
        for i in range(0,len(s), 3):
            t += s[i:i+3]
            t += ','
        
        t = t[:-1]
        t = t[::-1]
        ans += '(' + '$' + t + '.00' + ')'
else:
    if s.count('.') == 1:
        temp = s.split('.')
        p1 = temp[0]
        p2 = temp[1][:2]
        p2 = p2 if len(p2) == 2 else p2 + '0'
        t=""
        p1 = p1[::-1]
        for i in range(0,len(p1), 3):
            t += p1[i:i+3]
            t += ','
        
        t = t[:-1]
        t = t[::-1]
        ans += '$' + t + '.' + p2 
    else:
        t=""
        s = s[::-1]
        for i in range(0,len(s), 3):
            t += s[i:i+3]
            t += ','
        
        t = t[:-1]
        t = t[::-1]
        ans += '$' + t + '.00' 

print(ans)