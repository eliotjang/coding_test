#include <iostream>
using namespace std;

struct Stack {
    int data[10000];
    int size;
    Stack() {
        size = 0;
    }
    void push(int num) {
        data[size] = num;
        size += 1;
    }
    bool empty() {
        if (size == 0) {
            return true;
        } else {
            return false;
        }
    }
    int pop() {
        if (empty()) {
            return -1;
        } else {
            size -= 1;
            return data[size];
        }
    }
    int top() {
        if (empty()) {
            return -1;
        } else {
            return data[size-1];
        }
    }
};

int main()
{
    // freopen("input.txt","r",stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    Stack stack;
    string command;
    int test, num;
    cin >> test;
    while (test--) {
        cin >> command;
        if (command == "push") {
            cin >> num;
            stack.push(num);
        } else if (command == "pop") {
            cout << stack.pop() << endl;
        } else if (command == "size") {
            cout << stack.size << endl;
        } else if (command == "empty") {
            cout << stack.empty() << endl;   
        } else if (command == "top") {
            cout << stack.top() << endl;
        } else {
            return -1;
        }
    }
    return 0;
}