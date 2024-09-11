n, m = input().split()
n = int(n)
m = int(m)
answer = ''
for i in range(m):
    for j in range(n):
        answer += '*'
    answer += '\n'
print(answer)