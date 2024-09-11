// 성격 유형 검사하기
function solution(survey, choices) {
  let answer = "";

  const MBTI = {
    R: 0,
    T: 0,
    C: 0,
    F: 0,
    J: 0,
    M: 0,
    A: 0,
    N: 0,
  };

  for (let i = 0; i < survey.length; i++) {
    switch (choices[i]) {
      case 1:
        MBTI[survey[i][0]] += 3;
        break;
      case 2:
        MBTI[survey[i][0]] += 2;
        break;
      case 3:
        MBTI[survey[i][0]] += 1;
        break;
      case 4:
        //
        break;
      case 5:
        MBTI[survey[i][1]] += 1;
        break;
      case 6:
        MBTI[survey[i][1]] += 2;
        break;
      case 7:
        MBTI[survey[i][1]] += 3;
        break;
      default:
      //
    }
  }

  answer += MBTI.R >= MBTI.T ? "R" : "T";
  answer += MBTI.C >= MBTI.F ? "C" : "F";
  answer += MBTI.J >= MBTI.M ? "J" : "M";
  answer += MBTI.A >= MBTI.N ? "A" : "N";

  return answer;
}
