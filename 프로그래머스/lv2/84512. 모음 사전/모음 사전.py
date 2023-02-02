def solution(word):
    dic = []
    
    #1  (s)로 들어오는 문자에 대한 사전
    def dictionary(s):
        if len(s) == 6: # 최대 길이
            return
        dic.append(s)
        
    #2  (s+i)로 넘김
        for i in ('A','E','I','O','U'):
            dictionary(s+i)
        
    for i in ('A','E','I','O','U'):
        dictionary(i)
    
    return dic.index(word)+1