from operator import itemgetter
def solution(N, stages):
    answer = []
    dict = {}
    stagecount = 0
    for count in range(N):
        tmp = len(stages)
        stagecount += 1
        molecular = 0
        for x in stages:
            if x == stagecount:
                molecular += 1
            elif x < stagecount:
                tmp -= 1 #remove runs many times,,, so we have to use just integer

        denominator = tmp
        if molecular == 0 or denominator == 0:
            dict[stagecount] = 0
        else:
            dict[stagecount] = molecular/denominator

    sorted_dict = sorted(dict.items(),key=itemgetter(1), reverse=True)
    for z in sorted_dict:
        answer.append(z[0])

    return answer

if __name__ == "__main__":
    N = 5
    stages = [2, 1, 2, 6, 2, 4, 3, 3]
    '''N = 4
    stages = [4,4,4,4,4]'''
    print(solution(N, stages))