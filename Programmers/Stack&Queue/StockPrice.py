def solution(prices):
    timecount = [0] * len(prices)
    height = 0
    count = 0
    time = 0
    j = 0
    while prices:
        x = prices.pop(0)
        time += 1
        if x > height:
            timecount.insert(count, time)
            time = 0
        elif x <= height:
            j = 0
            while prices[j] >= height:
                time += 1

                j += 1
            time += 1
            
            

    answer = []
    return answer

if __name__ == "__main__":
    prices = [1, 2, 3, 2, 3]
    print(solution(prices))