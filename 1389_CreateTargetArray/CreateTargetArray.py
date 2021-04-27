def createTargetArray(nums, index):
    target=[]*len(nums)
    for i in range(len(nums)):
        target.insert(index[i],nums[i])
    return target