def solution(num):
    count = 0
    while num != 1:
        if num%2 == 0:
            count += 1
            num = int(num/2)
        else:
            count += 1
            num = num*3 + 1
        if count >= 500:
            return -1
    return count

if __name__ == '__main__':
    num = 6
    solution(num)