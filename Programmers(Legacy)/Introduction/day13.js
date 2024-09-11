// 자릿수 더하기
function solution(n)
{
    var answer = 0;
    n = n.toString();
    for (var i=0; i<n.length; i++) {
        answer += Number(n[i]);
    }
    return answer;
}