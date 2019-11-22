def solution(s):
    answer = ''
    tmp = list(map(ord, s))
    tmp.sort(reverse=True)
    while tmp:
        answer += chr(tmp.pop(0))
    return answer

if __name__ == "__main__":
    s = 'Zbcdefg'
    print(solution(s))