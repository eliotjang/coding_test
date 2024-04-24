// 하샤드 수
function solution(x) {
    var answer = true;
    let splitX = x.toString().split("");
    let splitNumX = [];

    splitX.forEach(v => splitNumX.push(Number(v)));
    let sum = splitNumX.reduce((prev, curr) => prev + curr);

    if (x % sum !== 0) answer = false;
    return answer;
}