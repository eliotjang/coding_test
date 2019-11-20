def solution(s):
    if s[0] == '-':
        answer = -int(s[1:])
    else:
        answer = int(s[:])
    return answer

if __name__ == "__main__":
    s = '1234'
    print(solution(s))