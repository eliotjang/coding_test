// 문자열 나누기
function solution(s) {
  let answer = 0;

  let subStr = s.slice(0, 1);
  let diffStr = "";
  s = s.slice(1);
  while (s) {
    if (subStr[0] === s.slice(0, 1)) {
      subStr += s.slice(0, 1);
    } else {
      diffStr += s.slice(0, 1);
    }
    s = s.slice(1);

    if (subStr.length === diffStr.length) {
      answer++;
      subStr = s.slice(0, 1);
      diffStr = "";
      s = s.slice(1);
    }
  }
  if (subStr) {
    answer++;
  }

  return answer;
}
