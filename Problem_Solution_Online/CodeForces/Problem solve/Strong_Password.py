

t = int(input())
while t>0:
    t -= 1
    str = input()
    n = len(str)
    p = 0
    for i in range(0, n):
        if str[i] == str[i+1]:
            p = i
            break

    for i in range(n, 0, -1):
        str[i] == str[i-1]
        if p == i-1:
            str[p] = str[p] + 97
            break

    print(str)