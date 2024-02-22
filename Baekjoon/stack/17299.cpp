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
    vector<int> NGF(N);
    vector<int> F(1000001);
    for(int i=0; i<N; i++) {
        cin >> A[i];
        F[A[i]]++;
    }
    stack<int> Idx;
    for(int i=0; i<A.size(); i++) {
        while ( !Idx.empty() && F[A[Idx.top()]] < F[A[i]]) {
            NGF[Idx.top()] = A[i];
            Idx.pop();
        }
        Idx.push(i);
    }
    while ( !Idx.empty() ) {
        NGF[Idx.top()] = -1;
        Idx.pop();
    }
    for (int i=0; i<NGF.size(); i++) {
        cout << NGF[i] << ' ';
    }
    return 0;
}