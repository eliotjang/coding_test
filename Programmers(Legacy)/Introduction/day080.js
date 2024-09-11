// 예상 대진표
function solution(n, a, b) {
  let answer = 1;
  if (b < a) {
    [a, b] = [b, a];
  }
  while (a + 1 !== b || a % 2 === 0) {
    if (a % 2 !== 0) {
      a++;
    }
    if (b % 2 !== 0) {
      b++;
    }
    a /= 2;
    b /= 2;
    answer++;
  }
  return answer;
}
