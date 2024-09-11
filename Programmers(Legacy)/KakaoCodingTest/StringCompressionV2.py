def solution(s):
    answer = len(s)
    for i in range(1, len(s)//2+1):
        result, unit, cnt = '', s[:i], 1
        for j in range(i, len(s), i):
            if s[j:j+i] == unit:
                cnt += 1
            else:
                result += str(cnt)+unit if cnt > 1 else unit
                unit = s[j:j+i]
                cnt = 1
        result += str(cnt)+unit if cnt > 1 else unit
        answer = min(answer, len(result))
    return answer

if __name__ == "__main__":
    s = "aabbaccc"
    # s = "ababcdcdababcdcd"
    # s = "abcabcdede"
    # s = "abcabcabcabcdededededede"
    # s = "xababcdcdababcdcd"
    print(solution(s))