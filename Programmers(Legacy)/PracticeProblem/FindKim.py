def solution(seoul):
    if 'Kim' in seoul:
        x = seoul.index('Kim')
    
    answer = '김서방은 ' + str(x) + '에 있다'
    return answer

if __name__ == "__main__":
    seoul = ['Jane', 'Kim']
    print(solution(seoul))