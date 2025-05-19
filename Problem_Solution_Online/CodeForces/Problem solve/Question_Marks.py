
t = int(input())
while t>0:
    t -= 1
    n = int(input())
    str = input()
    A = str.count("A")
    B = str.count("B")
    C = str.count("C")
    D = str.count("D")
    ans = 0
    if n>A:
        ans += A
    else:
        ans += n
    if n>B:
        ans += B
    else:
        ans += n
    if n>C:
        ans += C
    else:
        ans += n
    if n>D:
        ans += D
    else:
        ans += n
    print(ans)