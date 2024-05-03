// 문자열 다루기 기본
function solution(s) {
  let answer = false;
  answer = s.length === 4 || s.length === 6 ? true : false;
  answer = isNaN(s) ? false : true;
  return answer;
}
