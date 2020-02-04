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

    void levelOrder(Node * root) {
        static int level = 0;
        static int compare = 0;
        while (root->left || root->right)
        {
            cout << root->data << " ";
            if (level == compare) {
                if (root->left && root->right) {
                    Solution tmp;
                    level++;
                    tmp.levelOrder(root->left);
                    tmp.levelOrder(root->right);
                    compare++;
                }
                else if (root->left) {
                    level++;
                    compare++;
                    this->levelOrder(root->left);               
                }
                else {
                    level++;
                    compare++;
                    this->levelOrder(root->right);
                }
            }
            else {
                level--;
                return;
            }
            if (level < compare) {
                this->levelOrder(root->left);
                this->levelOrder(root->right);
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
