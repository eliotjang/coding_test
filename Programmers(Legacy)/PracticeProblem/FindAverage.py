def solution(arr):
    answer = 0
    for i in arr:
        answer += i
    answer /= len(arr)
    return answer

if __name__ == "__main__":
    arr = [1,2,3,4]
    print(solution(arr))