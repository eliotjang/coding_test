def solution(prices):
    timecount = []
    height = 0
    count = 0
    time = 0
    
    while prices:
        i = 0
        x = prices.pop(0)
        while prices[i] >= x:
            time += 1
            i += 1
            if i is len(prices):
                break
        else:
            pass
        timecount.append(time)
        time = 0
            

    answer = []
    return answer

if __name__ == "__main__":
    prices = [1, 2, 3, 2, 3]
    print(solution(prices))