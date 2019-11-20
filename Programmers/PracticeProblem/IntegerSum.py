def solution(a, b):
    answer = 0
    if a == b:
        return a
    
    if a > b:
        tmp = a
        a = b
        b = tmp
    
    while a <= b:
        answer += a
        a += 1
    return answer

if __name__ == "__main__":
    a = 3
    b = 5
    print(solution(a, b))