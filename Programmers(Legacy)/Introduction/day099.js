// 롤케이크 자르기
function solution(topping) {
  let answer = 0;
  const littleBro = new Map();
  const bigBro = new Set();

  for (let i = 0; i < topping.length; i++) {
    littleBro.has(topping[i])
      ? littleBro.set(topping[i], littleBro.get(topping[i]) + 1)
      : littleBro.set(topping[i], 1);
  }

  for (let i = 0; i < topping.length; i++) {
    const count = littleBro.get(topping[i]) - 1;
    bigBro.add(topping[i]);
    count === 0
      ? littleBro.delete(topping[i])
      : littleBro.set(topping[i], count);

    if (bigBro.size === littleBro.size) answer++;
  }
  return answer;
}
