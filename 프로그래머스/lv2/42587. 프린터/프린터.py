from collections import deque

def solution(priorities, location):
    priList = []
    answer = []
        
    #1 deque priList 생성
    for i in range(len(priorities)):
        priList.append([priorities[i],i])
    priList=deque(priList)
    
    #2 우선순위
    while priList:
        if priList[0][0]==max(priorities):
            #priList[0][0]의 우선순위가 가장 높다면 answer로 pop
            priorities.pop(priorities.index(max(priorities)))
            answer.append(priList[0])
            priList.popleft()
        else:
            #우선순위가 가장 높지 않다면 priList[]의 뒤로
            priList.append(priList[0])
            priList.popleft()
            
    #3 문서 위치 찾기
    for i in range(len(answer)):
        if answer[i][1]==location:
            #location과 위치 값이 다르므로 +1
            return i+1
    