def solution(numbers):
    fornum = list(numbers)
    countnum = list(numbers)
    count = 0
    answer = 0
    tmp = ''
    for idx, number in enumerate(numbers):
        countnum = list(numbers)
        del countnum[idx]
        tmp = number
        while countnum:
            answer += find_prime(tmp)
            if not countnum:
                break
            tmp += countnum[count]
            count += 1
        

    return answer

def find_prime(strnum):
    x = int(strnum)
    if x > 1:
        for i in range(2,x):
            if (x % i) == 0:
                result = 1
                break
        else:
            result = 0
    else:
        result = 0
    return result


if __name__ == "__main__":
    numbers = "17"
    #number = "011"
    print(solution(numbers))