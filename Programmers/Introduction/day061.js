// 로또의 최고 순위와 최저 순위
function solution(lottos, win_nums) {
  let answer = [];
  let countCorrect = [0, 0];

  const countZero = lottos.filter((e) => e === 0).length;

  lottos.sort((a, b) => b - a);

  for (let i = 0; i <= lottos.length; i++) {
    if (lottos[i] === 0) break;
    const isCorrect = win_nums.some((e) => e === lottos[i]);
    if (isCorrect) {
      countCorrect[0]++;
      countCorrect[1]++;
    }
  }

  for (let i = 0; i < countZero; i++) {
    countCorrect[0]++;
  }

  answer.push(countRank(countCorrect[0]));
  answer.push(countRank(countCorrect[1]));

  return answer;
}

function countRank(x) {
  switch (x) {
    case 6:
      return 1;
      break;
    case 5:
      return 2;
      break;
    case 4:
      return 3;
      break;
    case 3:
      return 4;
      break;
    case 2:
      return 5;
      break;
    default:
      return 6;
  }
}
