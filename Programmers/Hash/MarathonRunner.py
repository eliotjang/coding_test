def solution(participant, completion):
    tmp = participant.copy()
    for i in completion:
        for j in participant:
            if i is j:
                tmp.remove(j)
                break
    answer = tmp[0]
    return answer

if __name__ == "__main__":
    #participant = ["leo", "kiki", "eden"]
    #completion = ["eden", "kiki"]
    #participant = ["marina", "josipa", "nikola", "vinko", "filipa"]
    #completion = ["josipa", "filipa", "marina", "nikola"]
    participant = ["mislav", "stanko", "mislav", "ana"]
    completion = ["stanko", "ana", "mislav"]
    print(solution(participant, completion))