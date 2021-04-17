from collections import Counter
def numIdenticalPairs(nums):
    count = 0
    count_x = Counter(nums)
    for c in count_x.values():
        count+=(c*(c-1)/2)
    return int(count)