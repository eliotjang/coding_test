// 할인 행사
function solution(want, number, discount) {
  let answer = 0;
  const obj = {};
  for (let i = 0; i < want.length; i++) {
    obj[want[i]] = number[i];
  }
  const obj2 = {};

  const equals = (a, b) => JSON.stringify(a) === JSON.stringify(b);

  for (let i = 0; i <= discount.length; i++) {
    if (i < 10) {
      obj2[discount[i]] = (obj2[discount[i]] ?? 0) + 1;
    } else {
      let flag = true;
      for (const key in obj) {
        if (obj[key] !== obj2[key]) {
          flag = false;
          break;
        }
      }
      if (flag) answer++;

      obj2[discount[i - 10]]--;
      obj2[discount[i]] = (obj2[discount[i]] ?? 0) + 1;
    }
  }
  return answer;
}
