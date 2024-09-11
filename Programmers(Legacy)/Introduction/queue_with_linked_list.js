class Node {
    constructor(value) {
        this.value = value;
        this.next = null;
    }
}

class Queue {
    constructor() {
        this.head = null;
        this.tail = null;
    }

    dequeue() {
        if (this.head === null) {
            return null;
        }
        const deleteHead = this.head;
        this.head = this.head.next;
        return deleteHead;
    }

    enqueue(value) {
        const newNode = new Node(value);
        if (this.head === null) {
            this.head = newNode;
            this.tail = newNode;
        } else {
            this.tail.next = newNode;
            this.tail = newNode;
        }
    }
}

