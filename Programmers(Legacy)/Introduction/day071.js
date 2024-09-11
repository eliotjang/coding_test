// 개인정보 수집 유효기간
function solution(today, terms, privacies) {
  const answer = [];

  const termObj = {};

  const DAY = today.split(".");
  DAY.forEach((value, index) => {
    DAY[index] = +value;
  });

  for (let i = 0; i < terms.length; i++) {
    const term = terms[i].split(" ");
    termObj[term[0]] = +term[1];
  }

  for (let i = 0; i < privacies.length; i++) {
    const privacy = privacies[i].split(" ");
    const t = privacy[1];

    const YMD = privacy[0].split(".");
    YMD.forEach((value, index) => {
      YMD[index] = +value;
    });

    YMD[1] += termObj[t];
    if (YMD[2] === 1) {
      YMD[1]--;
      YMD[2] = 28;
    } else {
      YMD[2]--;
    }

    if (YMD[1] > 12) {
      const divisor =
        YMD[1] % 12 === 0
          ? Math.floor(YMD[1] / 12) - 1
          : Math.floor(YMD[1] / 12);
      YMD[1] = YMD[1] % 12 === 0 ? 12 : YMD[1] % 12;
      YMD[0] += divisor;
    }

    // console.log('YMD', YMD);

    if (YMD[0] < DAY[0]) {
      answer.push(i + 1);
    }
    if (YMD[0] === DAY[0] && YMD[1] < DAY[1]) {
      answer.push(i + 1);
    }
    if (YMD[0] === DAY[0] && YMD[1] === DAY[1] && YMD[2] < DAY[2]) {
      answer.push(i + 1);
    }
  }

  return answer;
}
