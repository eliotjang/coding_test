// 평균 구하기
function solution(arr) {
    var answer = 0;
    for (var i=0; i<arr.length; i++) {
        answer += arr[i];
    }
    return answer / arr.length;
}