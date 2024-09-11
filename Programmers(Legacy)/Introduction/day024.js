// 서울에서 김서방 찾기
function solution(seoul) {
    var answer = '';
    let idx = seoul.findIndex(element => element === 'Kim');
    answer = `김서방은 ${idx}에 있다`;
    return answer;
}