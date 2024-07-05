// 멀리 뛰기
const map = { 1: 1, 2: 2 };

function longJump(n) {
  if (map[n]) {
    return map[n];
  } else {
    map[n] = longJump(n - 1) + longJump(n - 2);
    return (longJump(n - 1) + longJump(n - 2)) % 1234567;
  }
}

function solution(n) {
  const answer = longJump(n);
  return answer;
}
