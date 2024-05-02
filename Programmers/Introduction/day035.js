// 부족한 금액 계산하기
function solution(price, money, count) {
  let answer = -1;
  let totalPrice = 0;
  for (let i = 1; i <= count; i++) {
    totalPrice += i * price;
  }
  if (money - totalPrice < 0) {
    return totalPrice - money;
  } else {
    return 0;
  }
}
