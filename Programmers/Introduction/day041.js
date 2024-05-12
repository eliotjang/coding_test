// 이상한 문자 만들기
function solution(s) {
  let answer = "";
  strArr = s.split(" ");
  strArr.forEach((word) => {
    let makeWord = "";
    for (i = 0; i < word.length; i++) {
      makeWord += i % 2 === 0 ? word[i].toUpperCase() : word[i].toLowerCase();
    }
    answer += makeWord + " ";
  });
  answer = answer.slice(0, -1);
  return answer;
}
