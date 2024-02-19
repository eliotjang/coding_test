#include <iostream>
using namespace std;

struct Queue {
    int data[5000];
    int begin;
    int end;
    int count;
    int pushdata;
    int flag;
    Queue(int num) {
        begin = 0;
        end = 0;
        pushdata = 1;
        count = num;
        flag = 0;
    }
    void push() {
        data[end] = pushdata++;
        end++;
    }
    bool empty() {
        if (begin == end) {
            return true;
        } else {
            return false;
        }
    }
    // 1 2 3 4 5 6 7
    int pop() {
        int tmp = count;
        while (tmp) {
            if (data[flag] != 0) {
                flag++;
                tmp--;
            } else continue;
            // 0이면 넘기고 아니면 K번 넘기고 거기있는 값 출력
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input.txt","r",stdin);
    int N, K;
    cin >> N >> K;
    Queue queue(K);
    while(N--) {
        queue.push();
    }
    return 0;
}