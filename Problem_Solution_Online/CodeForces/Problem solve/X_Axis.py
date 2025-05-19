
t = int(input())
while t > 0:
    t -= 1
    n = (input())
    set = {int(x) for x in n.split()}
    max_val = max(set)
    min_val = min(set)
    print(max_val - min_val)