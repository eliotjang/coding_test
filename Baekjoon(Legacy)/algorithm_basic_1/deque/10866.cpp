#include <iostream>
using namespace std;

struct Deque {
    int data[20000];
    int head;
    int tail;
    Deque() {
        head = 10000;
        tail = 10000;
    }
    void push_front(int x) {
        data[head-1] = x;
        head--;
    }
    void push_back(int x) {
        data[tail] = x;
        tail++;
    }
    bool empty() {
        if (head == tail) {
            return true;
        } else {
            return false;
        }
    }
    int pop_front() {
        if (empty()) {
            return -1;
        } else {
            head++;
            return data[head-1];
        }
    }
    int pop_back() {
        if (empty()) {
            return -1;
        } else {
            tail--;
            return data[tail];
        }
    }
    int size() { return tail - head; }
    int front() {
        if (empty()) {
            return -1;
        } else {
            return data[head];
        }
    }
    int back() {
        if (empty()) {
            return -1;
        } else {
            return data[tail-1];
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    Deque d;
    int N;
    cin >> N;
    string command;
    while(N--) {
        cin >> command;
        if (command == "push_front") {
            int x;
            cin >> x;
            d.push_front(x);
        } else if (command == "push_back") {
            int x;
            cin >> x;
            d.push_back(x);
        } else if (command == "pop_front") {
            cout << d.pop_front() << "\n";
        } else if (command == "pop_back") {
            cout << d.pop_back() << "\n";
        } else if (command == "size") {
            cout << d.size() << "\n";
        } else if (command == "empty") {
            cout << d.empty() << "\n";
        } else if (command == "front") {
            cout << d.front() << "\n";
        } else if (command == "back") {
            cout << d.back() << "\n";
        } else return 1;
    }
    return 0;
}