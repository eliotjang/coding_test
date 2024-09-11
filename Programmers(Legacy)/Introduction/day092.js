// 프로세스
function solution(priorities, location) {
    let answer = 0;
    const os = priorities.map((process, index) => {
        return { process, index };
    });
    
    while (os.length) {
        const target = os.shift();
        if (os.some((element) => element.process > target.process)) {
            os.push(target);
        } else {
            answer++;
            if (target.index === location) {
                break;
            }
        }
    }
    return answer;
}