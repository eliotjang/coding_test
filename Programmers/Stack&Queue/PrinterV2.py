def solution(priorities, location):
    max = 0
    tmp = 0
    answer = 0
    while(True):
        for i in priorities:
            if i > max:
                max = i
        tmp = priorities[0]
        if tmp < max:
            if location == 0:
                location = len(priorities) - 1
            else:
                location -= 1
            priorities.remove(tmp)
            priorities.append(tmp)
        elif tmp == max:
            priorities.remove(tmp)
            answer += 1
            max = 0
            for i in priorities:
                if i > max:
                    max = i
            if location == 0:
                break
            else:
                location -= 1
    return answer

if __name__ == "__main__":
    priorities = [2, 1, 3, 2]
    #priorities = [1, 1, 9, 1, 1, 1]
    #priorities = [1, 1, 9, 1, 9, 1]
    location = 2
    #location = 0
    #location = 4
    print(solution(priorities, location))