def solution(arrangement):
    answer = 0
    x = arrangement.replace('()', 'R')
    count = 0
    tmp = list(x)
    while tmp:
        x = tmp.pop(0)
        if x == 'R':
            if count is 0:
                pass
            else:
                answer += count
        elif x == '(':
            count += 1
        elif x == ')':
            answer += 1
            count -= 1
        else:
            break
    return answer

if __name__ == "__main__":
    arrangement = "()(((()())(())()))(())"
    print(solution(arrangement))