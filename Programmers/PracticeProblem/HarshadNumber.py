def solution(x):
    tmp = x
    z = 0
    y = 0
    while x > 0:
        y = x
        x =  x//10 * 10
        z += y - x
        x /= 10
    if tmp%z == 0:
        answer = True
    else:
        answer = False
    return answer

if __name__ == "__main__":
    x = 234
    print(solution(x))