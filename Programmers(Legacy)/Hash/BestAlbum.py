from operator import itemgetter

def solution(genres, plays):
    answer = []
    d = {}

    # make set according to genre.
    for i in range(0, len(genres)) : 
        if genres[i] not in d : 
            d[genres[i]] = [] 
            d[genres[i]].append(0); 
        d[genres[i]].append( (i, plays[i]) ); 
        d[genres[i]][0] += plays[i]; 
    # now d is 
    # d = { 'classic': [1450,(0, 500), (2, 150), (3, 800)],
    # 'pop': [3100, (1, 600), (4, 2500)] }
    
    
    # sort set on descending order. 
    a = list(d.values()) 
    a.sort(key=itemgetter(0), reverse=True) 
    
    # now a is 
    # a = [ [3100, (1, 600), (4, 2500)], 
    # [1450, (0, 500), (2, 150), (3, 800)] ] 
    
    # pop the most played genre. 
    # and selecte the most played two songs. 
    while a : 
        max = -1 
        # remove total sum of the genre played. 
        a[0].pop(0) 
        
        # sort by number played on increasing order. 
        a[0].sort(key=itemgetter(1), reverse=True) 
        
        # extract top 2 songs and append to answer. 
        for i in range(0, len(a[0])) : 
            if (i >= 2) : 
                break 
            answer.append(a[0][i][0]) 
            
        # remove current genre from list. 
        a.pop(0) 
        
    return answer

if __name__ == "__main__":
    genres = ["classic", "pop", "classic", "classic", "pop"]
    plays = [500, 600, 150, 800, 2500]
    print(solution(genres, plays))