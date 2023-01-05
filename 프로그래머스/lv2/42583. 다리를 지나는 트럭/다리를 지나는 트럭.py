from collections import deque

def solution(bridge_length, weight, truck_weights):
    # cross_weight : 도로 위 무게
    # cross_truck : 다리를 건너는 트럭
    # pass_truck : 다리를 지난 트럭
    
    sec = 0
    cross_weight = 0
    cross_truck = deque([0] * bridge_length)

    while truck_weights:
        sec += 1
        pass_truck = cross_truck.popleft()
        cross_weight -= pass_truck
        
        if cross_weight + truck_weights[0] <= weight:
            tmp = truck_weights.pop(0)
            cross_truck.append(tmp)
            cross_weight += tmp
            
        else:
            cross_truck.append(0)

    while cross_weight > 0:
        sec += 1
        pass_truck = cross_truck.popleft()
        cross_weight -= pass_truck

    return sec