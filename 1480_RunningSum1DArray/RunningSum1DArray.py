def runningSum(self, nums):
    sums = []
    summe = 0
    for i in nums:
        summe+=i
        sums.append(summe)
    return sums