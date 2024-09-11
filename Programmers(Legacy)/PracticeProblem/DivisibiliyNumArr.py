def solution(arr, divisor):
    answer = []
    for i in arr:
        if i%divisor == 0:
            answer.append(i)
    if not answer:
        answer.append(-1)
    answer.sort()
    return answer

if __name__ == "__main__":
    '''arr = [5, 9, 7, 10]
    divisor = 5'''
    arr = [2, 36, 1, 3]
    divisor = 1
    print(solution(arr, divisor))