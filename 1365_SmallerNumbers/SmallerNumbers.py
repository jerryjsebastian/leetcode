def smallerNumbersThanCurrent(nums):
    answer=[]
    count = 0
    for i in range(len(nums)):
        for j in range(len(nums)):
            if i == j:
                continue
            elif nums[j]<nums[i]:
                count+=1
        answer.append(count)
        count=0
    return answer