// 달리기 경주
function solution(players, callings) {
  const answer = Array(players.length);
  const rank = {};

  for (let i = 0; i < players.length; i++) {
    rank[players[i]] = i;
  }

  for (const call of callings) {
    const index = rank[call];

    [rank[call], rank[players[index - 1]]] = [
      rank[players[index - 1]],
      rank[call],
    ];
    [players[index - 1], players[index]] = [players[index], players[index - 1]];

    // console.log(players);
  }

  return players;
}
