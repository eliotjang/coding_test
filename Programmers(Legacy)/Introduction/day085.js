// 연속 부분 수열 합의 개수
function solution(elements) {
  let answer = 0;
  const circularSequenceSum = new Set();
  for (let i = 1; i <= elements.length; i++) {
    let sum = 0;
    for (let j = 0; j < elements.length; j++) {
      if (j === 0) {
        for (let k = 0; k < i; k++) {
          sum += elements[k];
        }
        // console.log('sum : ', sum);
        circularSequenceSum.add(sum);
        continue;
      }
      sum -= elements[j - 1];
      sum += elements[(j + i - 1) % elements.length];
      circularSequenceSum.add(sum);
      // console.log('sum : ', sum);
    }
    // console.log('size : ', circularSequenceSum.size)
  }
  answer = circularSequenceSum.size;
  return answer;
}
