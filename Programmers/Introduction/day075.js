// 최댓값과 최솟값
function solution(s) {
  let answer = "";

  const numArr = s.split(" ");
  answer += Math.min(...numArr) + " ";
  answer += Math.max(...numArr);
  return answer;
}
