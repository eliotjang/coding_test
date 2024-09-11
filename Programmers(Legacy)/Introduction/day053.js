// 명예의 전당 (1)
function solution(k, score) {
  let answer = [];
  let hof = [];
  for (let i = 0; i < score.length; i++) {
    if (i < k) {
      hof.push(score[i]);
    } else {
      if (score[i] > hof[0]) {
        hof[0] = score[i];
      }
    }
    hof.sort((a, b) => a - b);
    answer.push(hof[0]);
  }
  return answer;
}
