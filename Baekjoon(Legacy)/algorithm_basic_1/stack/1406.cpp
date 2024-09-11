#include <iostream>
using namespace std;

struct Stack {
    char data[600001];
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
        size--;
        return data[size];
    }
    char top() {
        return data[size-1];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    Stack LStack, RStack;
    string Result, N;
    int M;
    cin >> N >> M;
    for (const char &element: N) {
        LStack.push(element);
    }
    for (int i=0; i<M; i++) {
        char command;
        cin >> command;
        if (command == 'L') {
            if (LStack.empty()) {
                continue;
            } else {
                RStack.push(LStack.pop());
            }
        } else if (command == 'D') {
            if (RStack.empty()) {
                continue;
            } else {
                LStack.push(RStack.pop());
            }
        } else if (command == 'B') {
            if (LStack.empty()) {
                continue;
            } else {
                LStack.pop();
            }
        } else if (command == 'P') {
            char c;
            cin >> c;
            LStack.push(c);
        } else return -1;
    }
    int RSize = RStack.size;
    for (int i=0; i<RSize; i++) {
        LStack.push(RStack.pop());
    }
    int LSize = LStack.size;
    for (int i=0; i<LSize; i++) {
        Result += LStack.pop();
    }
    for (int i=0; i<Result.size(); i++) {
        cout << Result[Result.size()-i-1];
    }
    return 0;

    
}