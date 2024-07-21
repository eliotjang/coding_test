class Node {
  constructor(data) {
    this.data = data;
    this.next = null;
  }
}

class LinkedList {
  constructor() {
    let init = new Node("init");
    this.head = init;
    this.tail = init;

    this.currentNode = undefined;
    this.dataLength = 0;
  }

  length() {
    return this.dataLength;
  }

  append(data) {
    let newNode = new Node(data);

    this.tail.next = newNode;
    this.tail = newNode;
    this.dataLength++;
  }

  toString() {
    let currentNode = this.head;
    currentNode = currentNode.next;

    let s = "";
    for (let i = 0; i < this.dataLength; i++) {
      s += `${currentNode.data},`;
      currentNode = currentNode.next;
    }
    return `[${s.slice(0, -1)}]`;
  }

  get fullData() {
    let currentNode = this.head;
    currentNode = currentNode.next;

    let s = "";
    for (let i = 0; i < this.dataLength; i++) {
      s += `${currentNode.data},`;
      currentNode = currentNode.next;
    }
    return JSON.parse(`[${s.slice(0, -1)}]`);
  }

  insert(index, data) {
    let currentNode = this.head;
    currentNode = currentNode.next;

    for (let i = 0; i < index - 1; i++) {
      currentNode = currentNode.next;
    }
    let newNode = new Node(data);
    newNode.next = currentNode.next;
    currentNode.next = newNode;
    this.dataLength++;
  }
}

const ll = new LinkedList();
ll.append(1);
ll.append(2);
ll.append(3);
console.log(ll.fullData);
ll.insert(2, 10);
console.log(ll.fullData);
