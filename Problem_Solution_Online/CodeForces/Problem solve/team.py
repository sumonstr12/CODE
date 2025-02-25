

t = int(input())
con = 0
for _ in range(t):
    a, b, c = map(int, input().split())
    if a+b+c > 1:
        con = con + 1

print(con)