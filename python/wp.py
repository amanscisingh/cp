# import pyautogui as pg
# import time

# time.sleep(5)

# def design(a, n):
#     str=""
#     for i in range(n):
#         str = str + a
#     return str


# for i in range(500):
#     # while (j<=15):
#     pg.write("Soo jaao frnds")
#     time.sleep(0.3)
#     pg.press('enter')
#     print(500-i)

import pprint as pp

s = ""
t = "t"

n1 = len(s)
n2 = len(t)


# code to find longest common subsequence of s and t
# dp = [[0 for i in range(n2+1)] for j in range(n1+1)]

# for i in range(1, n1+1):
#     for j in range(1, n2+1):
#         if s[i-1] == t[j-1]:
#             dp[i][j] = dp[i-1][j-1] + 1
#         else:
#             dp[i][j] = max(dp[i-1][j], dp[i][j-1])


dp = [[0 for i in range(n2+1)] for j in range(n1+1)]
for i in range(1, n1+1):
    dp[i][0] = dp[i-1][0] + ord(s[i-1])

for j in range(1, n2+1):
    dp[0][j] = dp[0][j-1] + ord(t[j-1])

for i in range(1, n1+1):
    for j in range(1, n2+1):
        if s[i-1] == t[j-1]:
            dp[i][j] = dp[i-1][j-1] 
        else:
            dp[i][j] = min(dp[i-1][j] + ord(s[i-1]), dp[i][j-1] + ord(t[j-1]))

pp.pprint(dp)