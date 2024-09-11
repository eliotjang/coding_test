def solution(n):
    solution = []
    answer = list(str(n))
    answer.reverse()
    for i in answer:
        solution.append(int(i))
    return solution

if __name__ == '__main__':
    n = 12345
    print(solution(n))