// H-Index
function solution(citations) {
  let answer = 0;
  citations.sort((a, b) => b - a);

  if (citations[0] === 0) return 0;

  for (let i = 1; i <= citations.length; i++) {
    if (citations[i] <= i) {
      answer++;
      break;
    }
    answer++;
  }
  return answer;
}
