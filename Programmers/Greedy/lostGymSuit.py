"""
Author: Eliot Jang
Last modified: 2019-11-07
"""
def solution(n, lost, reserve):
    current = n - len(lost)
    for i in lost:
        for j in reserve:
            if i == j:
                current += 1
                lost.remove(i)
                reserve.remove(j)
                break
    for i in lost:
        for j in reserve:
            if i == j + 1:
                current += 1
                reserve.remove(j)
                break
            elif i == j - 1:
                current += 1
                reserve.remove(j)              
                break
            elif i == j:
                current += 1
                reserve.remove(j)
                break
            else:
                pass
    
    answer = current
    return answer

if __name__ == "__main__":
    n = 5
    lost = [2,3]
    reserve = [5,3,1]
    print(solution(n, lost, reserve))
    pass