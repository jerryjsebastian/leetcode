def balancedStringSplit(s):
    bal = 0
    count = 0
    for i in range(0,len(s)):
        if s[i]=='L':
            bal-=1
        else:
            bal+=1
        if bal==0:
            count+=1
    return count