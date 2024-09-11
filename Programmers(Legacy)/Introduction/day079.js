// 카펫
function solution(brown, yellow) {
    const total = brown + yellow;
    const answer = [];
    for ( let i = 1 ;  i < 1415 ; i++ ) {
        if ( yellow % i === 0 ) {
            const y = i + 2;
            if ( total % y === 0 && (total / y - 2) === (yellow / i) ) {
                answer.push(total / y, y);
                break;
            }
        }
    }
    return answer;
}