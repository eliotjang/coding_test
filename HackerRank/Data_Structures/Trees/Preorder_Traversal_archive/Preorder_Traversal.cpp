#include <iostream>
#include <cstddef>

using namespace std;

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

    void preOrder(Node *root) {
        cout << root->data << ' ';
        if (!(root->left==NULL)) {
            this->preOrder(root->left);
        }
        if (!(root->right==NULL)) {
            this->preOrder(root->right);
        }
    }

};

int main() {
    
    Solution myTree;
    Node* root = NULL;

    string str_data;
    int data;
    int count = 0;

    while(cin >> str_data) {
        if(str_data.compare("\\")==0 || str_data.compare("/")==0) continue;
        count++;
        data = stoi(str_data);
        root = myTree.insert(root, data);
    }

    myTree.preOrder(root);

    return 0;
}
