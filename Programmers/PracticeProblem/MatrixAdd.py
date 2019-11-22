def solution(arr1, arr2):
    answer = arr1[:]
    for i in range(len(arr1)):
        for j in range(len(arr2)):
            answer[i][j] = arr1[i][j] + arr2[i][j]
    return answer

if __name__ == "__main__":
    #arr1 = [[1,2],[2,3]]
    #arr2 = [[3,4],[5,6]]
    arr1 = [[1],[2]]
    arr2 = [[3],[4]]
    print(solution(arr1, arr2))