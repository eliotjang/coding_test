def solution(bridge_length, weight, truck):
    answer = 0
    queue = [0] * bridge_length
    seconds = 0
    while queue:
        seconds += 1
        queue.pop(0)
        if truck:
            if sum(queue) + truck[0] <= weight:
                queue.append(truck.pop(0))
            else:
                queue.append(0)
                
    answer = seconds
    return answer

if __name__ == "__main__":
    '''bridge_length = 2
    weight= 10
    truck_weights = [7,4,5,6]'''
    bridge_length = 100
    weight= 100
    truck_weights = [10]
    '''bridge_length = 100
    weight = 100
    truck_weights = [10,10,10,10,10,10,10,10,10,10]'''
    print(solution(bridge_length, weight, truck_weights))