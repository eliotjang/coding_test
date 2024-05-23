// 두 개 뽑아서 더하기
function solution(numbers) {
  const addNumSet = new Set();
  for (let i = 0; i < numbers.length - 1; i++) {
    for (let j = i + 1; j < numbers.length; j++) {
      addNumSet.add(numbers[i] + numbers[j]);
    }
  }
  const answer = Array.from(addNumSet).sort((a, b) => a - b);
  console.log(answer);
  return answer;
}
