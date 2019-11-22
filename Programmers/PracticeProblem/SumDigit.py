def solution(n):
    x = 0
    y = 0
    z = 0
    while n>0:
        y = n//10
        z += n - y*10
        n //= 10
    return z

if __name__ == "__main__":
    n = 123
    print(solution(n))