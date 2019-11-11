def solution(priorities, location):
    search = priorities[location]
    tmp = list(priorities)
    big = max(priorities)
    count = 0
    for i in range(len(priorities)):
        if priorities[i] < big:
            count += 1
            tmp.append(priorities[i])
            del tmp[0]
        else:
            break
    x = location - count
    if x < 0:
        x = x + len(tmp)
    answer = x + 1
    return answer

if __name__ == "__main__":
    #priorities = [2, 1, 3, 2]
    priorities = [1, 1, 9, 1, 1, 1]
    #location = 2
    location = 0
    print(solution(priorities, location))