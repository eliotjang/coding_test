#include <iostream>
using namespace std;

struct Queue {
    int data[10000];
    int begin;
    int end;
    Queue() {
        begin = 0;
        end = 0;
    }
    void push(int num) {
        data[end] = num;
        end++;
    }
    bool empty() {
        if (begin == end) {
            return true;
        } else {
            return false;
        }
    }
    int pop() {
        if (empty()) {
            return -1;
        } else {
            begin++;
            return data[begin-1];
        }
    }
    int size() {return end-begin;}
    int front() {
        if (empty()) {
            return -1;
        } else {
            return data[begin];
        }
    }
    int back() {
        if (empty()) {
            return -1;
        } else {
            return data[end-1];
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    Queue queue;
    string command;
    int N;
    cin >> N;
    while(N--) {
        cin >> command;
        if (command == "push") {
            int num;
            cin >> num;
            queue.push(num);
        } else if (command == "pop") {
            cout << queue.pop() << '\n';
        } else if (command == "size") {
            cout << queue.size() << '\n';
        } else if (command == "empty") {
            cout << queue.empty() << '\n';
        } else if (command == "front") {
            cout << queue.front() << '\n';
        } else if (command == "back") {
            cout << queue.back() << '\n';
        } else return -1;
    }
    return 0;
}