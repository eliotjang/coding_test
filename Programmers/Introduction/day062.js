// 옹알이 (2)
function solution(babbling) {
  let answer = 0;

  const term = ["aya", "ye", "woo", "ma"];

  for (babble of babbling) {
    const babbleChar = [...babble];
    let word = "";
    let prevWord = "";
    while (babbleChar.length) {
      word += babbleChar.shift();
      const isTerm = term.includes(word);
      if (isTerm) {
        if (word === prevWord) continue;
        prevWord = word;
        word = "";
      }
    }
    if (!word) answer++;
  }

  return answer;
}
