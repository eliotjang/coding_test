// 가장 가까운 같은 글자
function solution(s) {
  let answer = [];
  const checkAlpha = new Map();
  for (let i = 0; i < s.length; i++) {
    if (checkAlpha.get(s[i]) === undefined) {
      checkAlpha.set(s[i], i);
      answer.push(-1);
    } else {
      answer.push(i - checkAlpha.get(s[i]));
      checkAlpha.set(s[i], i);
    }
  }
  return answer;
}
