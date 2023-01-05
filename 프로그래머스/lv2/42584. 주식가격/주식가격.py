from collections import deque

def solution(prices):
    
    #1 deque data 생성
    data = deque(prices)
    sec = [0] * len(data)
    cnt = 0
    
    # 비교 & 초 세기
    while data:
        tmp = data.popleft()
        for i in data:
            sec[cnt] += 1
            if tmp > i :
                break
        cnt += 1
    
    return sec

