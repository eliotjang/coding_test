// 카펫
function solution(brown, yellow) {
  const answer = [];
  carpetCount = brown + yellow;

  for (let i = 3; i < Math.ceil(carpetCount / 2); i++) {
    if (carpetCount % i === 0) {
      const height = i - 2;
      // const width =
    }
  }

  return answer;
}
