
t = int(input())

for i in range(t):
    a, b = map(int, input().split())
    a, b = int(a), int(b)
    if a > b:
        print(b , a)
    else:
        print(a, b)