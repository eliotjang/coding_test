#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> NGE(N);
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    stack<int> stack;
    
    for(int i=0; i<N; i++) {
        if (!stack.empty() && A[stack.top()] < A[i]) {
            while (!stack.empty() && A[stack.top()] < A[i]) {
                NGE[stack.top()] = A[i];
                stack.pop();
            }
        }
        stack.push(i);
        NGE[i] = -1;
    }
    if (!stack.empty()) {
        NGE[stack.top()] = -1;
        stack.pop();
    }
    for (int i=0; i<N; i++) {
        cout << NGE[i] << ' ';
    }
    return 0;
}