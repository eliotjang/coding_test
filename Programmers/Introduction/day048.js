// K번째수
function solution(array, commands) {
  let answer = [];
  for (let l = 0; l < commands.length; l++) {
    const i = commands[l][0] - 1;
    const j = commands[l][1];
    const k = commands[l][2] - 1;
    let sliceArr = array.slice(i, j);
    sliceArr.sort((a, b) => a - b);
    answer.push(+sliceArr[k]);
  }
  return answer;
}
