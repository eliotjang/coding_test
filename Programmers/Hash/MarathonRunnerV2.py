def solution(participant, completion):
    participant.sort()
    completion.sort()
    for i in range(len(completion)):
        if completion[i] is not participant[i]:
            return participant[i]
    return participant[-1]

if __name__ == "__main__":
    #participant = ["leo", "kiki", "eden"]
    #completion = ["eden", "kiki"]
    participant = ["marina", "josipa", "nikola", "vinko", "filipa"]
    completion = ["josipa", "filipa", "marina", "nikola"]
    #participant = ["mislav", "stanko", "mislav", "ana"]
    #completion = ["stanko", "ana", "mislav"]
    print(solution(participant, completion))