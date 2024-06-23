// 둘만의 암호
function solution(s, skip, index) {
  let answer = "";

  skipCode = skip.split("").map((e) => e.charCodeAt());

  for (const c of s) {
    let cCode = c.charCodeAt();

    for (let i = 0; i < index; i++) {
      cCode = cCode + 1 > 122 ? cCode + 1 - 26 : cCode + 1;
      if (skipCode.includes(cCode)) {
        i--;
        continue;
      }
    }

    answer += String.fromCharCode(cCode);
  }

  return answer;
}
