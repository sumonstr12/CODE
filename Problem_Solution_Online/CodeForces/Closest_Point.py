
t = int(input())

while t > 0:
    t -= 1 
    n = int(input())
    x = [int(x) for x in input().split()]
    x.sort()
    if n > 2:
        print("NO")
    else:
        if abs(x[1] - x[0] == 1):
            print("NO")
        else:
            print("YES")
