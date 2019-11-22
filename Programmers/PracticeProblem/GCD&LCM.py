def solution(n, m):
    answer = []
    tmp1 = []
    tmp2 = []
    tmp3 = []
    x = 1
    while x <= n:
        if n%x == 0:
            tmp1.append(x)
            x += 1
        else:
            x += 1
    x = 1
    while x <= m:
        if m%x == 0:
            tmp2.append(x)
            x += 1
        else:
            x += 1
    tmp3 = list(tmp2)
    while tmp2:
        y = tmp2.pop()
        if y in tmp1:
            answer.append(y)
            break

    arr1 = []
    arr2 = []
    if n <= m:
        for i in range(m):
            arr1.append(n*(i+1))
        for j in range(n):
            arr2.append(m*(j+1))
        while arr2:
            z = arr2.pop(0)
            if z in arr1:
                answer.append(z)
                break

    else:
        for i in range(n):
            arr1.append(n*(i+1))
        for j in range(n):
            arr2.append(m*(j+1))
        while arr1:
            z = arr1.pop(0)
            if z in arr2:
                answer.append(z)
                break
    
    
    return answer

if __name__ == "__main__":
    n = 2
    m = 5
    print(solution(n, m))