// 이진 변환 반복하기
function solution(s) {
  const answer = [];

  let convertCount = 0;
  let zeroCount = 0;

  while (s !== "1") {
    let oneStr = "";
    for (let i = 0; i < s.length; i++) {
      if (s[i] === "0") {
        zeroCount++;
      } else {
        oneStr += "1";
      }
    }
    s = oneStr.length.toString(2);
    convertCount++;
  }

  answer.push(convertCount, zeroCount);
  return answer;
}
