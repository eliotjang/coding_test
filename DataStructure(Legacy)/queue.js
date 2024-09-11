class Queue {
  constructor() {
    this._arr = [];
  }

  push(data) {
    this._arr.push(data);
  }

  pop() {
    if (!this.isEmpty()) return this._arr.shift();
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

const q = new Queue();
q.push(1);
q.push(2);
q.push(3);
console.log(q.pop());
console.log(q.top());
console.log(q.bottom());
