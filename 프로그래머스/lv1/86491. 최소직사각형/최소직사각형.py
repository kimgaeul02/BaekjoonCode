def solution(sizes):
    short = []
    long = []
    
    for i in sizes:
        if i[0]>i[1]:
            long.append(i[0])
            short.append(i[1])
        else:
            short.append(i[0])
            long.append(i[1])
        
    SL = max(short) # short length
    LL = max(long) # long length
    
    return SL*LL