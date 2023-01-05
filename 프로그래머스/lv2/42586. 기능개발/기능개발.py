def solution(progresses, speeds):
    answer = []
    date=[]
    for i in range(len(progresses)):
        tmp=progresses[i]
        cnt=0
        while tmp<100:
            tmp += speeds[i]
            cnt += 1
        date.append(cnt)

    share=date[0]
    count=1
    for i in range(1,len(date)):
        if share>=date[i]:
            count+=1
        else:
            answer.append(count)
            share=date[i]
            count=1
    answer.append(count)
    return answer