import operator

def solution(genres, plays):
    answer = []
    tmp1 = {}
    tmp2 = {}
    for i in range(len(genres)):
        if genres[i] is "classic":
            tmp1[i] = plays[i]
        elif genres[i] is "pop":
            tmp2[i] = plays[i]
    sorted_tmp1 = sorted(tmp1.items(), key = operator.itemgetter(1), reverse = True)
    sorted_tmp2 = sorted(tmp2.items(), key = operator.itemgetter(1), reverse = True)
    count1 = 0
    count2 = 0
    for z in range(len(sorted_tmp1)):
        count1 += int(sorted_tmp1[z][1])
    for z in range(len(sorted_tmp2)):
        count2 += int(sorted_tmp2[z][1])
    if count1 >= count2:
        for x in range(2):
            answer.append(sorted_tmp1[x][0])
        for y in range(2):
            answer.append(sorted_tmp2[y][0])
    else:
        for x in range(2):
            answer.append(sorted_tmp2[x][0])
        for y in range(2):
            answer.append(sorted_tmp1[y][0])
    
    return answer

if __name__ == "__main__":
    genres = ["classic", "pop", "classic", "classic", "pop"]
    plays = [500, 600, 150, 800, 2500]
    print(solution(genres, plays))