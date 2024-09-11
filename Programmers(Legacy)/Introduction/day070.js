// 바탕화면 정리
function solution(wallpaper) {
  const answer = [];

  let lux = wallpaper.length;
  let luy = wallpaper[0].length;
  let rdx = 0;
  let rdy = 0;

  for (let i = 0; i < wallpaper.length; i++) {
    for (let j = 0; j < wallpaper[0].length; j++) {
      if (wallpaper[i][j] === "#") {
        if (lux > i) lux = i;
        if (luy > j) luy = j;
        if (rdx < i) rdx = i;
        if (rdy < j) rdy = j;
      }
    }
  }

  answer.push(lux, luy, rdx + 1, rdy + 1);

  console.log(answer);
  return answer;
}
