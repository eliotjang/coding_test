// 기사단원의 무기
countDivisor();

function solution(number, limit, power) {
    let answer = 0;
    
    for(let i = 1; i <= number; i++) {
        const count = countDivisor(i);
        answer += count > limit ? power : count;
    }
    
    return answer;
}

function countDivisor(x) {
    let count = 0;
    if (x === 1) {
        return 1;
    }
    for( let i = 1; i <= x; i++) {
        if ( i > x / i ) break;
        if ( x % i === 0 ) {
            count += x / i === i ? 1 : 2;
        }
    }
    return count;
}