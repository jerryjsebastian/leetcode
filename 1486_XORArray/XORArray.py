def xorOperation(n, start):
    nums=[]
    xor = 0
    for i in range(n):
        nums.append(start+2*i)
    for j in nums:
        xor^=j
    return xor