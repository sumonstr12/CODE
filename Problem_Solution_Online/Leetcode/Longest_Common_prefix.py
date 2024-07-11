
# The enumerate() function returns an iterator of pairs,
# where each pair contains the index and the corresponding element from the iterable.

def longestCommonPrefix(strs):
    if not strs:
        return ""
    shortest = min(strs, key=len)
    for i, ch in enumerate(shortest):  # i is the index and ch is the character
        for other in strs:
            if other[i] != ch:
                return shortest[:i]
    return shortest



mylist = ['flower', 'flow', 'flight']
print(longestCommonPrefix(mylist))  # Output: fl   