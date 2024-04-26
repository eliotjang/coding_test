// 제일 작은 수 제거하기
function solution(arr) {
    if (arr.length === 1) return [-1];
    let minNum = Math.min(...arr);
    let answer = arr.filter(e => {
        return e !== minNum;
    });
    return answer;
}