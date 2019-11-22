def solution(n, lost, reserve):
    current = n - len(lost)
    tmp1 = list(lost)
    for i, x in enumerate(tmp1):
        if x in reserve:
            lost.remove(x)
            reserve.remove(x)
            current += 1

    for i, x in enumerate(reserve):
        for j, y in enumerate(lost):
            if x == y-1:
                lost.remove(y)
                current += 1
                break
            elif x == y+1:
                lost.remove(y)
                current += 1
                break
    return current
if __name__ == "__main__":
    n = 5
    lost = [2, 3, 4]
    reserve = [1, 2, 3, 6]
    print(solution(n, lost, reserve))