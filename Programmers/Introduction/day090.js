// 의상
function solution(clothes) {
  let answer = 1;
  const obj = {};

  for (const arr of clothes) {
    obj[arr[1]] = (obj[arr[1]] || 0) + 1;
  }

  for (const key in obj) {
    answer *= obj[key] + 1;
  }

  return answer - 1;
}
