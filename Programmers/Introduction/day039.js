// 최대공약수와 최소공배수
let GCD = (a, b) => {
  let r = 0;
  while (b != 0) {
    r = a % b;
    a = b;
    b = r;
  }
  return a;
};

let LCM = (a, b, gcd) => {
  return (a * b) / gcd;
};

function solution(n, m) {
  let gcd, lcm;
  n > m ? (gcd = GCD(n, m)) : (gcd = GCD(m, n));
  lcm = LCM(n, m, gcd);
  let answer = [gcd, lcm];
  return answer;
}
