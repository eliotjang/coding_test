#command = [[2, 5, 3], [4, 4, 1], [1, 7, 3]]
#print(len(command))
def solution(array, commands):
    tmp = list()
    answer = []
    while len(commands) > 0:
        tmp = [1, 5, 2, 6, 3, 7, 4]
        x = commands[0][0] - 1
        y = commands[0][1] - 1
        del tmp[:x]
        del tmp[y-x+1:]
        tmp.sort()
        z = commands[0][2] - 1
        answer.append(tmp[z])
        del commands[0]
    return answer

if __name__ == "__main__":
    command = [[2, 5, 3], [4, 4, 1], [1, 7, 3]]
    array = [1, 5, 2, 6, 3, 7, 4]
    solution(array, command)
    