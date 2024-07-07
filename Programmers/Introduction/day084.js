// 괄호 회전하기
class Stack {
  constructor() {
    this._arr = [];
  }
  push(item) {
    this._arr.push(item);
  }
  pop() {
    return this._arr.pop();
  }
  peek() {
    return this._arr[this._arr.length - 1];
  }
}

function solution(s) {
  let answer = 0;
  const obj = {
    ")": "(",
    "}": "{",
    "]": "[",
  };
  const kLen = s.length;
  for (let k = 0; k < kLen; k++) {
    const stack = new Stack();
    let check = true;
    for (let i = 0; i < s.length; i++) {
      if ("({[".includes(s[i])) {
        stack.push(s[i]);
        continue;
      }
      if (stack.peek() === obj[s[i]]) {
        stack.pop();
      } else {
        check = false;
        break;
      }
    }
    if (stack.peek() === undefined && check) {
      answer++;
    }
    s = s.slice(1) + s[0];
  }
  return answer;
}
