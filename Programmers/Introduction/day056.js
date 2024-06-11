// 과일 장수
function solution(k, m, score) {
  let result = 0;
  score.sort((a, b) => b - a);
  const lowScores = score.filter((apple, index) => {
    return index % m === m - 1;
  });
  lowScores.forEach((lowScore) => {
    result += lowScore * m;
  });
  return result;
}
