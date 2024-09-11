def solution(board, moves):
    answer = 0
    count = 0
    array = list()
    tmp = 0
    for i in moves:
        for j in range(len(board)):
            tmp = board[j][i-1]
            if (tmp != 0):
                array.append(tmp)
                board[j][i-1] = 0
                break
            else:
                pass
    answer = forpop(array,count)
    return answer

def forpop(array,count):
    for k in range(len(array)):
        if (count >= 4):
                return count
        if array[k] == array[k+1]:
            count = countdoll(count)
            tmp2 = array[k]
            array.remove(tmp2)
            array.remove(tmp2)
            return forpop(array,count)
        
def countdoll(count):
    count += 2
    return count

if __name__ == "__main__":
    board = [[0,0,0,0,0],[0,0,1,0,3],[0,2,5,0,1],[4,2,4,4,2],[3,5,1,3,1]]
    moves = [1,5,3,5,1,2,1,4]
    print(solution(board, moves))