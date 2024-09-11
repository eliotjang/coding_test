def solution(a, b):
    if a == 1 or a == 4 or a == 7:
        day = ['FRI','SAT','SUN','MON','TUE','WED','THU']
    elif a == 2 or a == 8:
        day = ['MON','TUE','WED','THU','FRI','SAT', 'SUN',]
    elif a == 3 or a == 11:
        day = ['TUE','WED','THU','FRI','SAT','SUN','MON']
    elif a == 5:
        day = ['SUN','MON','TUE','WED','THU','FRI','SAT']
    elif a == 6:
        day = ['WED','THU','FRI','SAT','SUN','MON','TUE']
    elif a == 9 or a == 12:
        day = ['THU','FRI','SAT','SUN','MON','TUE','WED']
    elif a == 10:
        day = ['SAT','SUN','MON','TUE','WED','THU','FRI']

    x = b%7
    answer = day[x - 1]
    return answer

if __name__ == "__main__":
    a = 5
    b = 24
    print(solution(a, b))