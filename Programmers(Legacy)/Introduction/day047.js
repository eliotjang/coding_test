// 문자열 내 마음대로 정렬하기
function solution(strings, n) {
  let result = [];
  for (let i = 0; i < strings.length; i++) {
    result[i] = strings[i][n] + strings[i];
  }

  result.sort();

  for (let i = 0; i < result.length; i++) {
    result[i] = result[i].slice(1);
  }
  return result;
}
