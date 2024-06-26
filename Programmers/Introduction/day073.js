// 공원 산책
function solution(park, routes) {
  const s = [];
  const x = [];
  for (let i = 0; i < park.length; i++) {
    for (let j = 0; j < park[0].length; j++) {
      if (park[i][j] === "S") s.push(i, j);
      if (park[i][j] === "X") x.push([i, j]);
    }
  }

  // console.log('s : ', s);
  // console.log('x : ', x);

  for (let i = 0; i < routes.length; i++) {
    const route = routes[i].split(" ");
    let isPossible = true;
    let move;
    switch (route[0]) {
      case "E":
        move = Array.from(s);
        for (let j = 0; j < route[1]; j++) {
          move[1]++;
          const check = x.some((e) => e[0] === move[0] && e[1] === move[1]);
          if (check) isPossible = false;
          if (move[1] === park[0].length) isPossible = false;
        }
        if (isPossible) {
          s[1] += +route[1];
        }
        break;
      case "W":
        move = Array.from(s);
        for (let j = 0; j < route[1]; j++) {
          move[1]--;
          const check = x.some((e) => e[0] === move[0] && e[1] === move[1]);
          if (check) isPossible = false;
          if (move[1] < 0) isPossible = false;
        }
        if (isPossible) {
          s[1] -= +route[1];
        }
        break;
      case "S":
        move = Array.from(s);
        for (let j = 0; j < route[1]; j++) {
          move[0]++;
          const check = x.some((e) => e[0] === move[0] && e[1] === move[1]);
          if (check) isPossible = false;
          if (move[0] === park.length) isPossible = false;
        }
        if (isPossible) {
          s[0] += +route[1];
        }
        break;
      case "N":
        move = Array.from(s);
        for (let j = 0; j < route[1]; j++) {
          move[0]--;
          const check = x.some((e) => e[0] === move[0] && e[1] === move[1]);
          if (check) isPossible = false;
          if (move[0] < 0) isPossible = false;
        }
        if (isPossible) {
          s[0] -= +route[1];
        }
        break;
      default:
    }
    // console.log('s : ', s);
  }

  return s;
}
