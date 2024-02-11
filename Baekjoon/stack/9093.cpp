#include <iostream>
using namespace std;

struct Stack {
    char data[1000];
    int size;
    Stack() {
        size = 0;
    }
    void push(char c) {
        data[size] = c;
        size++;
    }
    bool empty() {
        if (size == 0) {
            return true;
        } else {
            return false;
        }
    }
    char pop() {
        if (empty()) {
            return -1;
        } else {
            size--;
            return data[size];
        }
    }
    char top() {
        if (empty()) {
            return -1;
        } else {
            return data[size-1];
        }
    }
};

int main() {
    // freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Stack stack;
    string s;
    int t;
    char c;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin,s);
        for (int i=0; i<s.size(); i++) {
            c = s[i];
            if (c == ' ') {
                while(!stack.empty()) {
                    cout << stack.pop();
                }
                cout << ' ';
            } else {
                stack.push(c);
            }
        }
        while(!stack.empty()) {
            cout << stack.pop();
        }
        cout << endl;
    }
    return 0;
}