def restoreString(s, indices):
    answer = ['']*len(s)
    for i in range(0,len(s)):
        answer[indices[i]]=s[i]
    return ''.join(answer)