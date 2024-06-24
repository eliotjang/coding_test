// 햄버거 만들기
function solution(ingredient) {
  let answer = 0;

  const hamburger = [1, 2, 3, 1];

  for (let i = 0; i < ingredient.length - 3; i++) {
    // console.log('before ingredient, i : ', ingredient, i);
    if (
      hamburger[0] === ingredient[i] &&
      hamburger[1] === ingredient[i + 1] &&
      hamburger[2] === ingredient[i + 2] &&
      hamburger[3] === ingredient[i + 3]
    ) {
      // console.log('match');
      ingredient.splice(i, 4);
      i -= 4;
      answer++;
    }
    // console.log('after ingredient, i : ', ingredient, i);
  }

  return answer;
}
