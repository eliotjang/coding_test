// 문자열을 정수로 바꾸기
function solution(s) {
    var answer = 0;
    if (s[0] === '-') {
        s = s.slice(1);
        answer -= Number(s);
    } else {
        answer += Number(s);
    }
    return answer;
}