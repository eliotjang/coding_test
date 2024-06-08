// 카드 뭉치
function solution(cards1, cards2, goal) {
  let answer = "Yes";
  goal.forEach((word, index) => {
    if (word === cards1[0]) {
      cards1.shift();
      return;
    } else if (word === cards2[0]) {
      cards2.shift();
      return;
    } else {
      answer = "No";
    }
  });
  return answer;
}
