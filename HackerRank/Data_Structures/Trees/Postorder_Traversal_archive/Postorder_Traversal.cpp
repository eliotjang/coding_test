#include <iostream>
#include <cstddef>

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }

    void postOrder(Node *root) {
        if (!(root->left==NULL)) {
            this->postOrder(root->left);
        }
        if (!(root->right==NULL)) {
            this->postOrder(root->right);
        }
        std::cout << root->data << ' ';
    }

};

int main() {
    
    Solution myTree;
    Node* root = NULL;

    std::string str_data;
    int data;
    int count = 0;

    while(std::cin >> str_data) {
        if(str_data.compare("\\")==0 || str_data.compare("/")==0) continue;
        count++;
        data = stoi(str_data);
        root = myTree.insert(root, data);
    }

    myTree.postOrder(root);

    return 0;
}
