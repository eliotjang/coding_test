// 정수 내림차순으로 배치하기
function solution(n) {
    var answer = 0;
    let sortArr = n.toString().split("").sort().reverse();
    answer = Number(sortArr.join(""));
    return answer;
}