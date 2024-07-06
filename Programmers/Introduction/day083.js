// 귤 고르기
function solution(k, tangerine) {
  let answer = 0;
  const obj = {};

  tangerine.forEach((x) => {
    obj[x] = (obj[x] || 0) + 1;
  });

  const sortable = [];
  for (const key in obj) {
    sortable.push(obj[key]);
  }
  sortable.sort((a, b) => b - a);

  sortable.some((value) => {
    if (k <= 0) return true;
    k -= value;
    answer++;
  });

  return answer;
}
