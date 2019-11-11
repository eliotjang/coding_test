def solution(priorities, location):
    answer = 0
    search, c = sorted(priorities, reverse=True), 0
    while True:
        for i, priority in enumerate(priorities):
            s = search[c]
            if priority == s:
                c += 1
                answer += 1
                if i == location:
                    break
        else:
            continue
        break
    return answer

if __name__ == "__main__":
    #priorities = [2, 1, 3, 2]
    priorities = [1, 1, 9, 1, 1, 1]
    #priorities = [1, 1, 9, 1, 9, 1]
    #location = 2
    location = 0
    #location = 4
    print(solution(priorities, location))