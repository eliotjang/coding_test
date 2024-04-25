// 나누어 떨어지는 숫자 배열
function solution(arr, divisor) {
    // let answer = arr.map( element => {
    //    if ( element % divisor == 0) return element;
    // });

    let answer = arr.filter(element => {
        return element % divisor == 0;
    })
    answer.sort((a, b) => a - b);
    if (answer.length === 0) return [-1];
    else return answer;
}