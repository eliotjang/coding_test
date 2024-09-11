// 모의고사
function solution(answers) {
  let result = [];
  let score = [0, 0, 0];
  const pattern1 = [1, 2, 3, 4, 5];
  const pattern2 = [2, 1, 2, 3, 2, 4, 2, 5];
  const pattern3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];

  answers.forEach((answer, index) => {
    const idx1 = index % pattern1.length;
    const idx2 = index % pattern2.length;
    const idx3 = index % pattern3.length;

    score[0] += pattern1[idx1] === answer ? 1 : 0;
    score[1] += pattern2[idx2] === answer ? 1 : 0;
    score[2] += pattern3[idx3] === answer ? 1 : 0;
  });

  const highScore = Math.max(...score);
  score.forEach((value, index) => {
    if (value === highScore) {
      result.push(index + 1);
    }
  });
  return result;
}
