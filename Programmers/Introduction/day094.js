// 타켓 넘버
function solution(numbers, target) {
  let answer = 0;

  function DFS(index, sum) {
    if (index === numbers.length) {
      if (sum === target) {
        answer++;
      }
      return;
    }
    DFS(index + 1, sum + numbers[index]);
    DFS(index + 1, sum - numbers[index]);
  }

  DFS(0, 0);
  return answer;
}
