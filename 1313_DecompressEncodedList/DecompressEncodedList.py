def decompressRLElist(nums):
    answer=[]
    for i in range(0,len(nums),2):
        freq=nums[i]
        val=nums[i+1]
        for i in range(freq):
            answer.append(val)
    return answer