// 2016년
function solution(a, b) {
  let date = new Date(2016, a - 1, b).toString().slice(0, 3).toUpperCase();
  return date;
}
