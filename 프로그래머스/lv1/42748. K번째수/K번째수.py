def solution(array, commands):
    answer = []
    
    for i,j,k in commands:
        # 슬라이싱: j는 제외, j-1까지 잘림
        slice = array[i-1:j]
        slice.sort()
        answer.append(slice[k-1])
        
    return answer
        