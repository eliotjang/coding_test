def solution(progresses, speeds):
    answer = []
    days = []
    for i in range(len(progresses)):
        count = 0
        tmp = 100 - progresses[i]
        while tmp > 0:
            tmp = tmp - speeds[i]
            count += 1
        if not days:
            days.append(count)
        elif max(days) > count:
            days.append(max(days))
        else:
            days.append(count)
    
    while days:
        y = min(days)
        x = days.count(y)
        answer.append(x)
        while y in days:
            days.remove(y)

    return answer

if __name__ == "__main__":
    progresses = [93,30,55]
    speeds = [1,30,5]
    print(solution(progresses, speeds))