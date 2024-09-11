from math import sqrt
def solution(n):
    tmp = int(sqrt(n))
    if n < 0:
        return -1
    if tmp*tmp == n:
        answer = (tmp+1)*(tmp+1)
    else:
        answer = -1

    return answer

if __name__ == "__main__":
    n = 121
    solution(n)