// n^2 배열 자르기
function solution(n, left, right) {
  const answer = [];
  for (let i = left; i <= right; i++) {
    row = Math.floor(i / n);
    column = i % n;
    answer.push(Math.max(row, column) + 1);
  }

  return answer;
}
