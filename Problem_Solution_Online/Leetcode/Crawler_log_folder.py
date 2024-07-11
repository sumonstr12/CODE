def minOperations(logs):
    stack = []
    for log in logs:
        if log == "../":
            if stack:
                stack.pop()
        elif log == "./":
            continue
        else:
            stack.append(log)
    return len(stack)


mylist = ["d1/","d2/","../","d21/","./"]
print(minOperations(mylist)) # 2