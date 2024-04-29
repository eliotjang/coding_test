class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

class Stack {
    constructor() {
        this.next = null;
    }

    peek() {
        if (this.head === null) {
            return null;
        }
        return this.head.data;
    }

    push(value) {
        let newHead = new Node(value);
        newHead.next = this.head;
        this.head = newHead;
    }

    pop() {
        if (this.head === null) {
            return null;
        }
        let deleteHead = this.head;
        this.head = this.head.next;
        return deleteHead;
    }
}