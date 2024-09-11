def solution(n):
    x = 1
    answer = 0
    while n >= x:
        if n%x == 0:
            answer += x
            x += 1
        else:
            x += 1
    return answer

if __name__ == "__main__":
    n = 12
    print(solution(n))