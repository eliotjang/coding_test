// x만큼 간격이 있는 n개의 숫자
function solution(x, n) {
    var answer = [];
    let tmp = x;
    for (let i = 0; i < n; i++) {
        answer.push(tmp);
        tmp += x;
    }
    return answer;
}