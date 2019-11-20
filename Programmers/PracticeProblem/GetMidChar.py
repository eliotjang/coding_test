def solution(s):
    if len(s)%2 == 0:
        answer = s[int(len(s)/2)-1:int(len(s)/2)+1]
    else:
        answer = s[int(len(s)/2):int(len(s)/2)+1]
    return answer

if __name__ == "__main__":
    #s = 'abcde'
    s = 'qwer'
    print(solution(s))