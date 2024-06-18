// 체육복
function solution(n, lost, reserve) {
    sortLost = lost.filter((e) => !reserve.includes(e)).sort((a, b) => a - b);
    sortReserve = reserve.filter((e) => !lost.includes(e)).sort((a, b) => a - b);

    let answer = n - sortLost.length;

    for( let i=0; i < sortReserve.length; i++) {
        for (let j=0; j < sortLost.length; j++) {
            if (sortReserve[i] + 1 === sortLost[j] || sortReserve[i] - 1 === sortLost[j]) {
                answer++;
                sortLost[j] = -1;
                break;
            }
        }
    }
    
    return answer;
}