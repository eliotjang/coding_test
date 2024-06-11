// 소수 만들기
function solution(nums) {
  let answer = 0;

  for (let i = 0; i < nums.length - 2; i++) {
    for (let j = i + 1; j < nums.length - 1; j++) {
      for (let k = j + 1; k < nums.length; k++) {
        const x = nums[i] + nums[j] + nums[k];
        if (isPrime(x)) {
          answer++;
        }
      }
    }
  }

  return answer;
}

function isPrime(x) {
  if (x === 1) return false;
  for (let i = 2; i <= Math.ceil(x / 2); i++) {
    if (x % i === 0) {
      return false;
    }
  }
  return true;
}
