// 내적
function solution(a, b) {
    let answer = 0;
    let mapAB = a.map((value, idx) => {
        return value * b[idx];
    });
    answer = mapAB.reduce((accumulator, currentValue) => {
        return accumulator + currentValue
    }, 0);
    return answer;
}