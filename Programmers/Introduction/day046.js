// 숫자 문자열과 영단어
function solution(s) {
  let answer = "";
  for (let i = 0; i < s.length; i++) {
    switch (s[i]) {
      case "z":
        i += 3;
        answer += "0";
        break;
      case "o":
        i += 2;
        answer += "1";
        break;
      case "t":
        if (s[i] + s[i + 1] == "tw") {
          i += 2;
          answer += "2";
        } else {
          i += 4;
          answer += "3";
        }
        break;
      case "f":
        if (s[i] + s[i + 1] == "fo") {
          i += 3;
          answer += "4";
        } else {
          i += 3;
          answer += "5";
        }
        break;
      case "s":
        if (s[i] + s[i + 1] == "si") {
          i += 2;
          answer += "6";
        } else {
          i += 4;
          answer += "7";
        }
        break;
      case "e":
        i += 4;
        answer += "8";
        break;
      case "n":
        i += 3;
        answer += "9";
        break;
      default:
        answer += s[i];
        break;
    }
  }
  return parseInt(answer);
}
