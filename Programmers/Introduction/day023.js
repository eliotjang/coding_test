// 콜라츠 추측
function solution(num) {
    var answer = 0;
    for (let i = 0; i < 500; i++) {
        if (num == 1) return answer;
        if (num % 2 == 0) num /= 2;
        else num = num * 3 + 1
        answer++;
    }
    return -1;
}