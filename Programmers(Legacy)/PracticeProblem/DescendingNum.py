def solution(n):
    answer = ''
    tmp = list(str(n))
    tmp2 = list(map(int, tmp))
    tmp2.sort(reverse=True)
    while tmp2:
        answer += str(tmp2.pop(0))
    return int(answer)

if __name__ == "__main__":
    n = 118372
    print(solution(n))