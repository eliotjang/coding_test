#include <bits/stdc++.h>

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
/*
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
*/
    public: int flag = 1;
    void levelOrder(Node * root) {
        if (flag) {
            cout << root->data << " ";
        }
        flag = 1;
        if (root->left && root->right) {
            //if(root->left->data <= root->right->data) {
            cout << root->left->data << " ";
                //this->levelOrder(root->left);
            //}
            cout << root->right->data << " ";
            flag = 0;
               //this->levelOrder(root->right);
            this->levelOrder(root->left);
            this->levelOrder(root->right);
        }
        if (!(root->left)) {
            if(root->right) {
                this->levelOrder(root->right);
            }
        }
        else if (!(root->right)) {
            if(root->left) {
                this->levelOrder(root->left);
            }
        }
        
    }

}; //End of Solution

int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.levelOrder(root);

    return 0;
}
