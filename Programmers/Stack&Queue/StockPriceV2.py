def solution(prices):
    answer = [0] * len(prices)
    for i in range(len(prices)):
        for j in range(i+1, len(prices)):
            if prices[i] <= prices[j]:
                answer[i] += 1
            else:
                answer[i] += 1
                break
    return answer

if __name__ == "__main__":
    #prices = [1, 2, 3, 2, 3]
    prices = [1, 2, 1, 5, 4, 3, 4, 1, 2]
    print(solution(prices))