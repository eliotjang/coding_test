// N개의 최소공배수
function LCM(a, b) {
  return (a * b) / GCD(a, b);
}

function GCD(a, b) {
  if (a < b) [a, b] = [b, a];
  if (b === 0) return a;
  const r = a % b;
  return GCD(b, r);
}

function solution(arr) {
  if (arr.length === 1) return arr[0];
  let a = arr[0];
  for (let i = 0; i < arr.length; i++) {
    const lcm = LCM(a, arr[i]);
    if (lcm > a) a = lcm;
  }
  return a;
}
