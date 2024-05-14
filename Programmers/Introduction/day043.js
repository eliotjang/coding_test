// 크기가 작은 부분문자열
function solution(t, p) {
  let answer = 0;
  let checkArr = [];
  for (let i = 0; i < t.length; i++) {
    let sliceStr = t.slice(i, i + p.length);
    if (sliceStr.length === p.length) {
      checkArr.push(parseInt(sliceStr));
    }
  }
  for (num of checkArr) {
    num <= parseInt(p) && answer++;
  }
  return answer;
}
