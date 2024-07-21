// k진수에서 소수 개수 구하기
function solution(n, k) {
  let answer = 0;

  const isPrime = (num) => {
    for (let i = 2, s = Math.sqrt(num); i <= s; i++) {
      if (num % i === 0) return false;
    }
    return num > 1;
  };

  const arr = n.toString(k).split("0");
  // console.log(arr);

  for (let i = 0; i < arr.length; i++) {
    if (isPrime(arr[i])) {
      answer++;
    }
  }

  return answer;
}
