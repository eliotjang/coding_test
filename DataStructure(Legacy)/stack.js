class Stack {
  constructor() {
    this._arr = [];
  }

  push(data) {
    this._arr.push(data);
  }

  pop() {
    if (!this.isEmpty()) return this._arr.pop();
  }

  top() {
    if (!this.isEmpty()) return this._arr[this._arr.length - 1];
  }

  bottom() {
    if (!this.isEmpty()) return this._arr[0];
  }

  isEmpty() {
    if (this._arr.length === 0) {
      return true;
    } else {
      return false;
    }
  }
}

const s = new Stack();
s.push(1);
s.push(2);
s.push(3);
console.log(s.pop());
console.log(s.top());
console.log(s.bottom());
