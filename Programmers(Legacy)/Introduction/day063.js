// 숫자 짝궁
function solution(X, Y) {
  let answer = "";

  const xArr = Array(10).fill(0);
  const yArr = Array(10).fill(0);
  const match = Array(10).fill(0);

  for (const char of X) {
    const x = parseInt(char);
    xArr[x]++;
  }
  for (const char of Y) {
    const y = parseInt(char);
    yArr[y]++;
  }

  for (let i = 0; i < 10; i++) {
    const matchNum = Math.min(xArr[i], yArr[i]);
    match[i] = matchNum;
  }

  for (let i = 9; i >= 0; i--) {
    const count = match[i];
    for (let j = 0; j < count; j++) {
      answer += i;
    }
  }

  if (!answer) return "-1";

  if (parseInt(answer) === 0) return "0";

  return answer;
}
