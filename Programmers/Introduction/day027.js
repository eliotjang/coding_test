// 핸드폰 번호 가리기
function solution(phone_number) {
    let asterisk_end = phone_number.length - 4;
    let answer = phone_number.split('').map((c, idx) => {
        if (idx < asterisk_end) return '*';
        else return c;
    });
    answer = answer.join('');
    return answer;
}