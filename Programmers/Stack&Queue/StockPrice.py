def solution(prices):
    answer = []
    time = 0
    prev_y = 0
    while prices:
        timecount = list(prices)
        x = prices.pop(0)
        y = timecount.pop(0)
        while timecount:
            y = timecount.pop(0)
            if x > y:
                pass
            elif x < y:
                time += 1
            elif x == y:
                if prev_y <= y:
                    time += 1
                elif prev_y > y:
                    if prev_y > x:
                        time += 1
                    else:
                        pass
            prev_y = y
        answer.append(time)
        time = 0
    return answer

if __name__ == "__main__":
    prices = [1, 2, 3, 2, 3]
    #prices = [1, 2, 1, 5, 4, 3, 4, 1, 2]
    print(solution(prices))