// 기능 개발
function solution(progresses, speeds) {
  const answer = [];

  const days = progresses.map((progress, index) => {
    return Math.ceil((100 - progress) / speeds[index]); // 남은 작업 개수 / 속도
  });

  let count = 1;
  let maxDay = days[0];

  for (let i = 1; i < days.length; i++) {
    if (days[i] <= maxDay) {
      count++;
    } else {
      maxDay = days[i];
      answer.push(count);
      count = 1;
    }
  }
  answer.push(count);
  return answer;
}
