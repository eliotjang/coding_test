def solution(x, n):
    answer = []
    for i in range(n):
        answer.append(x*(i+1))
    return answer

if __name__ == "__main__":
    x = 2
    n = 5
    solution(x, n)