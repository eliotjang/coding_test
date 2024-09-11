// 대충 만든 자판
function solution(keymap, targets) {
  const answer = [];

  for (let target of targets) {
    let targetChar = "";
    let pressKey = 0;
    while (target) {
      targetChar = target.slice(0, 1);
      target = target.slice(1);

      let count = 101;
      for (const key of keymap) {
        const index = key.indexOf(targetChar);
        if (index !== -1 && count > index + 1) {
          count = index + 1;
        }
      }
      if (count === 101) {
        pressKey = 0;
        break;
      }
      pressKey += count !== 101 ? count : 0;
    }
    const targetAnswer = pressKey !== 0 ? pressKey : -1;
    answer.push(targetAnswer);
  }

  return answer;
}
