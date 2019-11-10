def solution(phone_book):
    for i in phone_book:
        tmp = list(phone_book)
        tmp.remove(i)
        for j in range(len(tmp)):
            if i.startswith(tmp[j]):
                return False
            else:
                pass
    return True

if __name__ == "__main__":
    phone_book = ["123","456","789"]
    print(solution(phone_book))