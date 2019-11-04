'''
Author: Eliot Jang(장성원)
last_modified_at: 2019-11-04T09:25:00+09:00
'''

#인자로 받은 data를 인스턴스 data에 저장하고 left,right변수를 초기화하는 class 생성
class Node(object):
    def __init__(self, data):
        self.data = data
        self.left = self.right = None

#이원탐색트리 class 생성
class BinarySearchTree(object):
    #인스턴스 root node를 초기화
    def __init__(self):
        self.root = None
    #해당 data를 bst 인스턴스 root에 삽입
    def insert(self, data):
        self.root = self._insert_value(self.root, data)
        # root node에 어떠한 값이 있다면 True 반환
        return self.root is not None

    def _insert_value(self, node, data):
        #root node에 아무런 값도 없다면 nonde 인스턴스에 data를 그대로 삽입
        if node is None:
            node = Node(data)
        else:
            #해당 node의 데이터가 입력받은 data보다 작다면 
            if data <= node.data:
                #child tree인 왼쪽 트리로 가는 node
                node.left = self._insert_value(node.left, data)
            else:
                node.right = self._insert_value(node.right, data)
        return node

    def find(self, key, result):
        return self._find_value(self.root, key, result)

    def _find_value(self, root, key, result):
        if root is None or root.data == key:
            #return root is not None
            print("\n해당 배열의 데이터는", root.data,"\n데이터에 해당하는 첨자는 ",end='')
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

    print("초기 배열")
    print(array)

    bst = BinarySearchTree()
    for x in array:
        bst.insert(x)

    print("\n초기 배열이 이원탐색트리에 의해 정렬 되는 과정")
    bst.in_order_traversal(result)

    print("\n이원탐색트리를 적용한 새로운 배열")
    print(result)
    for a in result:
        print('[',result.index(a),']',a)

    while True:
        x = input("\n검색하고자하는 데이터를 입력하세요")
        int_x = int(x)
        print(bst.find(int_x,result))