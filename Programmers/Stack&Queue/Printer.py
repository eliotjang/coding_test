def solution(priorities, location):
    search = priorities[location]
    locationtmp = location
    tmp = list(priorities)
    big = max(priorities)
    count = 0
    for i in range(len(priorities)):
        if priorities[i] < big:
            locationtmp -= 1
            count += 1
            tmp.append(priorities[i])
            del tmp[0]
        else:
            locationtmp -= 1
            count += 1
            del tmp[0]
            big = max(tmp)
    x = count
    if x < 0:
        x = x + len(tmp)
    answer = -(location - count + 1)
    return answer

if __name__ == "__main__":
    #priorities = [2, 1, 3, 2]
    priorities = [1, 1, 9, 1, 1, 1]
    #priorities = [1, 1, 9, 1, 9, 1]
    #location = 2
    location = 0
    #location = 4
    print(solution(priorities, location))