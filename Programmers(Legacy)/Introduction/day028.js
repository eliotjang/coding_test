// 없는 숫자 더하기
function solution(numbers) {
    let answer = 0;
    for (let i = 0; i < 10; i++) {
        let hasTargetNumber = numbers.some(e => {
            return i === e;
        });
        if (!hasTargetNumber) answer += i;
    }
    return answer;
}