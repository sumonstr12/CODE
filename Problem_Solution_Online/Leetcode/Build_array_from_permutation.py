
nums = [0,2,1,5,3,4]

def buildArray(self,nums):
    return [nums[nums[i]] for i in range(len(nums))]

print(buildArray(nums,nums))