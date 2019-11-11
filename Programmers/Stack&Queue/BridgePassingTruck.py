def solution(bridge_length, weight, truck_weights):
    time = 0
    tmp = 0
    counttruck = list(truck_weights)
    for i in range(len(truck_weights)):
        tmp += truck_weights[i]
        del counttruck[0]
        j = 0
        while tmp < weight:
            if not counttruck:
                break
            tmp += truck_weights[j+1]
            counttruck.remove(truck_weights[i+1])
            time += 1
            j += 1

        time += bridge_length
        if not counttruck:
            break
    answer = time + 1
    return answer

if __name__ == "__main__":
    bridge_length = 2
    weight= 10
    truck_weights = [7,4,5,6]
    '''bridge_length = 100
    weight= 100
    truck_weights = [10]'''
    '''bridge_length = 100
    weight = 100
    truck_weights = [10,10,10,10,10,10,10,10,10,10]'''
    print(solution(bridge_length, weight, truck_weights))