// 모음 사전
function solution(word) {
  let answer = 0;
  let count = 0;
  const vowels = ["A", "E", "I", "O", "U"];

  function DFS(currentWord) {
    if (currentWord.length > 5) return;
    if (currentWord === word) {
      answer = count;
      return;
    }
    count++;

    for (let i = 0; i < vowels.length; i++) {
      DFS(currentWord + vowels[i]);
    }
  }

  DFS("");
  return answer;
}
