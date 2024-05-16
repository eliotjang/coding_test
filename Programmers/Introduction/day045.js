// 시저 암호
function solution(s, n) {
  let answer = "";
  for (c of s) {
    if (c === " ") {
      answer += " ";
      continue;
    }
    let decryption = c.charCodeAt() + n;
    if (64 <= c.charCodeAt() && c.charCodeAt() <= 90) {
      if (decryption > 90) {
        decryption -= 26;
      }
    }
    if (97 <= c.charCodeAt() && c.charCodeAt() <= 122) {
      if (decryption > 122) {
        decryption -= 26;
      }
    }
    answer += String.fromCharCode(decryption);
  }
  return answer;
}
