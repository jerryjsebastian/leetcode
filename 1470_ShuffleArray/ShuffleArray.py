def shuffle(nums, n):
    C = []
    for i in range(0,n):
        C.append(nums[i])
        C.append(nums[i+n])
    return C