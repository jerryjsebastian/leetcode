def subtractProductAndSum(n):
    digits=[]
    while n>0:
        rem=n%10
        digits.append(rem)
        n=n//10
    product=1
    sum=0
    for i in digits:
        product*=i
        sum+=i
    return product-sum