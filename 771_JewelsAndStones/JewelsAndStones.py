def numJewelsInStones(J, S):
    jewel_count = 0
    for j in J:
        jewel_count+=S.count(j)
    return jewel_count