// 신고 결과 받기
function solution(id_list, report, k) {
  const answer = [];

  const reportTarget = {}; // 신고당한 유저 목록
  const userReport = {}; // 사용자가 신고한 유저 목록

  for (const userId of id_list) {
    reportTarget[userId] = [];
    userReport[userId] = [];
  }

  for (let i = 0; i < report.length; i++) {
    const [userId, reportId] = report[i].split(" ");
    if (!reportTarget[reportId].includes(userId)) {
      reportTarget[reportId].push(userId);
      userReport[userId].push(reportId);
    }
  }

  for (let i = 0; i < id_list.length; i++) {
    let resultMailCount = 0;
    for (let j = 0; j < userReport[id_list[i]].length; j++) {
      const reportedCount = reportTarget[userReport[id_list[i]][j]].length;
      if (reportedCount >= k) {
        resultMailCount++;
      }
    }
    answer.push(resultMailCount);
  }

  return answer;
}
