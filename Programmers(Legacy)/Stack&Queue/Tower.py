def solution(heights):

    answer = [0] * len(heights)
    for i in range(len(heights)-1, 0, -1):
        j = len(heights)-1
        while j > 0:
            if heights[i] < heights[j-1]:
                del answer[i]
                answer.insert(i, j)
                break
            j -= 1
        x = heights.pop()
    return answer

if __name__ == "__main__":
    heights = [6,9,5,7,4]
    print(solution(heights))