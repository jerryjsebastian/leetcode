def kidsWithCandies(candies, extraCandies):
    sol = []
    for c in candies:
        if c+extraCandies>=max(candies):
            sol.append(True)
        else:
            sol.append(False)
    return sol