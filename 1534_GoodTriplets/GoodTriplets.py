def countGoodTriplets(arr, a, b, c):
    count = 0
    f,g,h = 0,0,0
    for i in range(len(arr)):
        for j in range(i+1,len(arr)):
            for k in range(j+1,len(arr)):
                if abs(arr[i]-arr[j]) <= a:
                    f=1
                if abs(arr[j]-arr[k]) <= b:
                    g=1
                if abs(arr[i]-arr[k]) <= c:
                    h=1
                if f*g*h == 1:
                    count+=1
                f,g,h = 0,0,0
    return count