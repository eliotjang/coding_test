#include <iostream>
using namespace std;

struct Stack {
    int data[100001];
    int size;
    int num;
    Stack() {
        size = 0;
        num = 1;
    }
    void push() {
        data[size] = num;
        size++;
        num++;
    }
    bool empty() {
        if (size == 0) {
            return true;
        } else {
            return false;
        }
    }
    void pop() {
        data[size-1] = 0;
        size--;
    }
    int top() {
        return data[size-1];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input.txt","r",stdin);
    bool flag = true;
    Stack stack;
    string str;
    int n;
    cin >> n;
    int max = n;
    while(n--) {
        int data;
        cin >> data;
        if (stack.empty()) {
            while(data--) {
                stack.push();
                str += '+';
            }
            stack.pop();
            str += '-';
        } else if (data < stack.top()) {
            flag = false;
            break;
        } else if (data > stack.top()) {
            while(data != stack.top()) {
                stack.push();
                str += '+';
                if (stack.top() > max) {
                    flag = false;
                    break;
                }
            }
            stack.pop();
            str += '-';
        } else if (data == stack.top()) {
            stack.pop();
            str += '-';
        } else {
            return -1;
        }
    }
    if (flag == false) {
        cout << "NO\n";
    } else {
        for (int i=0; i<str.size(); i++) {
            cout << str[i] << '\n';
        }
    }
    return 0;
}