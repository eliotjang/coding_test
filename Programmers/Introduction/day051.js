// 푸드 파이트 대회
function solution(food) {
  let foodArr = [];
  let answer = "";
  food.forEach((f, i) => {
    if (f % 2 !== 0) {
      f--;
    }

    for (let j = 0; j < f / 2; j++) {
      foodArr.push(i);
    }
  });
  leftFood = foodArr.join("");
  rightFood = foodArr.reverse().join("");
  answer = leftFood + "0" + rightFood;

  return answer;
}
