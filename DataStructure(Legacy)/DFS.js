const Tree = require("./binary-tree.js");

let t = new Tree(5);
t.insert(3);
t.insert(8);
t.insert(1);
t.insert(4);
t.insert(6);
t.insert(9);
console.log(t.root.right.data);
