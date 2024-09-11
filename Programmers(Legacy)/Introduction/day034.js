// 문자열 내림차순으로 배치하기
function solution(s) {
    const sortArr = [...s].sort().reverse();
    let answer = sortArr.join('');
    return answer;
}