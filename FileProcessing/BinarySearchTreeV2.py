'''
Author: Eliot Jang(장성원)
last_modified_at: 2019-11-03T20:25:00+09:00
'''

#인자로 받은 data를 Node에 저장하는 class 생성
class Node(object):
    def __init__(self, data):
        self.data = data
        self.left = self.right = None

#이원탐색트리 class 생성
class BinarySearchTree(object):
    #root node를 초기화
    def __init__(self):
        self.root = None
    #insert value of node and key value
    def insert(self, data):
        self.root = self._insert_value(self.root, data)
        return self.root is not None

    def _insert_value(self, node, data):
        #if node is none, just insert that data
        if node is None:
            node = Node(data)
        else:
            #
            if data <= node.data:
                node.left = self._insert_value(node.left, data)
            else:
                node.right = self._insert_value(node.right, data)
        return node

    def find(self, key, result):
        return self._find_value(self.root, key, result)

    def _find_value(self, root, key, result):
        if root is None or root.data == key:
            #return root is not None
            print("해당 배열의 첨자는 ",end='')
            return result.index(root.data)
        elif key < root.data:
            return self._find_value(root.left, key, result)
        else:
            return self._find_value(root.right, key, result)

    def in_order_traversal(self, result):
        def _in_order_traversal(root, result):
            if root is None:
                pass
            else:
                _in_order_traversal(root.left,result)
                result.append(root.data)
                print('[',array.index(root.data),']', root.data)
                _in_order_traversal(root.right,result)
        _in_order_traversal(self.root,result)

if __name__ == '__main__':
    array = [15, 11, 70, 5, 13, 50, 18, 30, 1]
    result = []

    bst = BinarySearchTree()
    for x in array:
        bst.insert(x)

    
    #print(bst.find(17))
    print("이원탐색트리르 적용하기 이전의 배열")
    bst.in_order_traversal(result)
    print("\n이원탐색트리를 적용한 배열")
    for a in result:
        print('[',result.index(a),']',a)

    print(bst.find(15,result))

#source: http://ejklike.github.io/2018/01/09/traversing-a-binary-tree-1.html