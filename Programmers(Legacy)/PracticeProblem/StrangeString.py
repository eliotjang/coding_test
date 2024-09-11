def solution(s):
    tmp = list(s.split(' '))
    x = ''
    result = []
    for string in tmp:
        word = ''
        i = 0
        while i < len(string):
            if len(string) == 1:
                x = string[i]
                word += x.upper()
                i += 1
            elif i%2 == 0:
                x = string[i]
                word += x.upper()
                i += 1
            elif i%2 == 1:
                x = string[i]
                word += x.lower()
                i += 1
        
        result.append(word)
    return ' '.join(result)

if __name__ == "__main__":
    #s = 'try hello world'
    s = 'Sp a b c d'
    print(solution(s))
    # Sp AcE