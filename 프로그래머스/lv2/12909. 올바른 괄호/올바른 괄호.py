def solution(s):
    answer = True
    cnt = 0
    
    if s[0] == ')':
        # 잘못된 경우
        return False
    
    for t in s:
        if cnt == 0 and t == ')':
            return False
        if t == '(':
            # 열면서 +1
            cnt += 1
        if t == ')':
            # 닫으면서 -1
            cnt -= 1
    if cnt != 0:
        return False
 
    return True