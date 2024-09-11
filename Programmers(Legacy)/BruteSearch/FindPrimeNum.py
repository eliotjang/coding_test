from itertools import permutations

def solution(numbers):
    total = []
    count = 0
    for i, x in enumerate(numbers):
        tmp = list(set(map(''.join, permutations(numbers, i+1))))
        for j, y in enumerate(tmp):
            total.append(int(tmp[j]))

    result = list(set(total))    
    for j, y in enumerate(result):
        if find_prime(result[j]):
            count += 1

    return count

def find_prime(strnum):
    x = int(strnum)
    if x > 1:
        for i in range(2,x):
            if (x % i) == 0:
                result = 0
                break
        else:
            result = 1
    else:
        result = 0
    return result

if __name__ == "__main__":
    #numbers = "17"
    numbers = "011"
    print(solution(numbers))