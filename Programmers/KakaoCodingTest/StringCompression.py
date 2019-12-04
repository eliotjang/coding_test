def solution(s):
    answer = 0
    newstr = ''
    calcmin = []
    for slice in range(1, int(len(s)/2)+1):
        count = 0
        tmp = s
        while tmp:
            if newstr == tmp[0:slice+1]:
                count += 1
                tmp = tmp[slice:]
            else:
                newstr += tmp[0:slice+1]
                         


    return answer

if __name__ == "__main__":
    s = "aabba"
    print(solution(s))