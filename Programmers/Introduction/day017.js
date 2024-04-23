// 자연수 뒤집어 배열로 만들기
function solution(n) {
    var answer = [];
    let str_n = n.toString();
    for (c of str_n) {
        answer.unshift(Number(c));
    };
    return answer;
}