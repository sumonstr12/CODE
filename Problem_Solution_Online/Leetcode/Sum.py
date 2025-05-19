
myList = [2, 3, 5, 6, 8, 9, 10]
target = 10
def twosum(self,nums,target):
    for i in range(len(nums)):
        for j in range(i+1,len(nums)):
            if nums[i]+nums[j] == target:
                return [i,j]
    return None

print(twosum(myList,target))
