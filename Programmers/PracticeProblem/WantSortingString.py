def solution(strings, n):

    answer = list(map(sorted, strings))
    return answer

if __name__ == '__main__':
    strings = ['sun', 'bed', 'car']
    n = 1
    solution(strings, n)