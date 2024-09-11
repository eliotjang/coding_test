// 피로도
function solution(k, dungeons) {
  let answer = 0;
  const visited = Array.from({ length: dungeons.length }, () => false);

  function DFS(currentFatigue, fatigueLevel) {
    // console.log('currentFatigue, fatigueLevel : ', currentFatigue, fatigueLevel);
    for (let i = 0; i < dungeons.length; i++) {
      if (!visited[i] && currentFatigue >= dungeons[i][0]) {
        visited[i] = true;
        DFS(currentFatigue - dungeons[i][1], fatigueLevel + 1);
        visited[i] = false;
      }
    }
    answer = Math.max(answer, fatigueLevel);
  }
  DFS(k, 0);
  return answer;
}
