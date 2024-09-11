// 가운데 글자 가져오기
function solution(s) {
    let answer = '';
    let sMidLen = Math.floor(s.length / 2)
    if (s.length % 2 === 0) {
        sMidLen -= 1;
        answer = s.slice(sMidLen, sMidLen + 2);
    } else {
        answer = s[sMidLen];
    }
    return answer;
}