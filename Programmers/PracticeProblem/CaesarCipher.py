def solution(s, n):
    answer = ''
    tmp = list(s)
    for i in range(len(tmp)):
        x = ord(tmp[i])
        if x == 32:
            z = x
        if 97 <= x <= 122:
            z = (x + n)
            if z > 122:
                z -= 26
        elif 65 <= x <= 90:
            z = (x + n)
            if z > 90:
                z -= 26
        answer += chr(z)
    return answer

if __name__ == "__main__":
    #s = "AB"
    s = 'a B z'
    #n = 1
    n = 4
    print(solution(s,n))