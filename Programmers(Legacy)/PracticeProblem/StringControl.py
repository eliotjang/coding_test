def solution(s):
    if not len(s) == 4 or len(s) == 6:
        return False
    for i in range(len(s)):
        try :
            x = int(s[i])
        except ValueError :
            return False
    return True

if __name__ == "__main__":
    s = "a234"
    #s = "1234"
    print(solution(s))