// JadenCase 문자열 만들기
function solution(s) {
  let answer = "";

  let checkFirst = false;
  for (let i = 0; i < s.length; i++) {
    if (i === 0) {
      answer = s[i].toUpperCase();
      continue;
    }

    if (s[i] === " ") {
      checkFirst = true;
      answer += " ";
      continue;
    }

    if (checkFirst) {
      answer += s[i].toUpperCase();
      checkFirst = false;
    } else {
      answer += s[i].toLowerCase();
    }
  }

  return answer;
}
