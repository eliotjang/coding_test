class Node {
  constructor(data) {
    this.data = data;
    this.left = null;
    this.right = null;
  }
}

class Tree {
  constructor(data) {
    let init = new Node(data);
    this.root = init;
    this.dataLength = 0;
  }

  length() {
    return this.dataLength;
  }

  insert(data) {
    let newNode = new Node(data);
    let currentNode = this.root;

    while (currentNode) {
      if (data === currentNode.data) {
        return;
      }
      if (data < currentNode.data) {
        if (!currentNode.left) {
          this.dataLength++;
          currentNode.left = newNode;
          return;
        }
        currentNode = currentNode.left;
      }
      if (data > currentNode.data) {
        if (!currentNode.right) {
          this.dataLength++;
          currentNode.right = newNode;
          return;
        }
        currentNode = currentNode.right;
      }
    }
  }

  DFS() {
    let result = [];
    let stack = [this.root];

    while (stack.length !== 0) {
      let current = stack.pop();
      if (current.right) {
        stack.push(current.right);
      }
      if (current.left) {
        stack.push(current.left);
      }
      result.push(current.data);
    }
    return result;
  }

  BFS() {
    let result = [];
    let queue = [this.root];

    while (queue.length !== 0) {
      let current = queue.shift();
      if (current.left) {
        queue.push(current.left);
      }
      if (current.right) {
        queue.push(current.right);
      }
      result.push(current.data);
    }
    return result;
  }
}

let t = new Tree(5);
t.insert(3);
t.insert(8);
t.insert(1);
t.insert(4);
t.insert(6);
t.insert(9);
console.log(t.DFS());
console.log(t.BFS());
