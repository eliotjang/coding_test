// 피보나치 수
function solution(n) {
  let answer = 0;

  let n1 = 0;
  let n2 = 1;
  for (let i = 1; i < n; i++) {
    answer = n1 + n2;
    answer %= 1234567;
    n1 = n2;
    n2 = answer;
  }

  return answer;
}
