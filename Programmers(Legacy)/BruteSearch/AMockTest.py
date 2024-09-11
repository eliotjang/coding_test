def solution(answers):
    answer = []
    tmpx=0
    tmpy=0
    tmpz=0
    total = []
    x=0
    y=0
    z=0
    count = 0
    for i in answers:
        x = count%5 + 1
        if count%2 == 0:
            y = 2
        elif count%5 + 1 == 1:
            y = 1
        elif count%5 + 1 == 3:
            y = 3
        elif count%5 + 1 == 5:
            y = 4

        if count%8 == 0 or count%8 == 1:
            z = 3
        elif count%5 == 2 or count%5 == 3:
            z = 1
        elif count%5 == 4 or count%5 == 5:
            z = 2
        elif count%8 == 6 or count%8 == 7:
            z = 4
        
        if i == x:
            tmpx += 1
        if i == y: 
            tmpy += 1
        if i == z:
            tmpz += 1
        count += 1
    
    total.append(tmpx)
    total.append(tmpy)
    total.append(tmpz)

    t0 = total[0]
    t1 = total[1]
    t2 = total[2]

    if t0 > t1 and t0 > t2:
        answer.append(1)
        if t0 == t1:
            answer.append(2)
            if t1 == t2:
                answer.append(3)
        elif t0 == t2:
            answer.append(3)
    if t1 > t0 and t1 > t2:
        answer.append(2)
        if t1 == t0:
            answer.append(1)
            if t0 == t2:
                answer.append(3)
    if t2 > t0 and t2 > t1:
        answer.append(3)
        if t2 == t0:
            answer.append(1)
            if t0 == t1:
                answer.append(2)

    if t0 == t1 == t2:
        answer.append(1)
        answer.append(2)
        answer.append(3)


    return answer

if __name__ == "__main__":
    #answers = [1,2,3,4,5]
    answers = [1,3,2,4,2]	
    print(solution(answers))