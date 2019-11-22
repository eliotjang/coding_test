def solution(n):
    answer = ''
    count = 0
    while count != n:
        if count%2 == 0:
            answer += '수'
            count += 1
        else:
            answer += '박'
            count += 1
    return answer

if __name__ == "__main__":
    n = 3
    solution(n)