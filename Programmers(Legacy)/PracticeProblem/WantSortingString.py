def solution(strings, n):
    tmp = []
    answer = []
    for i, x in enumerate(strings):
        tmp.append(x[n] + x)
    
    tmp.sort()
    for j, y in enumerate(tmp):
        answer.append(y[1:])
    return answer

if __name__ == '__main__':
    #strings = ['sun', 'bed', 'car']
    strings = ['abce', 'abcd', 'cdx']	
    #n = 1
    n = 2
    solution(strings, n)