// 주차 요금 계산
function solution(fees, records) {
  const answer = [];
  const [defaultTime, defaultFee, unitTime, unitFee] = fees;
  const map = {};
  const accTime = {};

  for (let i = 0; i < records.length; i++) {
    const [time, plateNum, history] = records[i].split(" ");

    if (history === "IN") {
      map[plateNum] = time;
    }
    if (history === "OUT") {
      const diff =
        (new Date(`2024-01-01T${time}Z`) -
          new Date(`2024-01-01T${map[plateNum]}Z`)) /
        1000 /
        60;
      delete map[plateNum];
      accTime[plateNum] = accTime[plateNum] ? accTime[plateNum] + diff : diff;
    }
  }

  for (const key in map) {
    const diff =
      (new Date("2024-01-01T23:59Z") - new Date(`2024-01-01T${map[key]}Z`)) /
      1000 /
      60;
    // console.log('key, diff : ', key, diff);
    accTime[key] = accTime[key] ? accTime[key] + diff : diff;
  }

  // console.log(accTime);
  const sortArr = [];
  for (const key in accTime) {
    sortArr.push(key);
  }
  sortArr.sort();

  for (let i = 0; i < sortArr.length; i++) {
    const fee =
      defaultTime < accTime[sortArr[i]]
        ? defaultFee +
          Math.ceil((accTime[sortArr[i]] - defaultTime) / unitTime) * unitFee
        : defaultFee;
    answer.push(fee);
  }

  return answer;
}
