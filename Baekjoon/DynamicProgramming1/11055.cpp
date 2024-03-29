#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    vector<int> D(N);
    // 가장 긴 증가하는 부분수열4
    for (int i=0; i<N; i++) {
        D[i] = 1;
        for (int j=0; j<i; j++) {
            if (A[j] < A[i] && D[i] < D[j]+1) {
                D[i] = D[j] + 1;
            }
        }
    }
    cout << *max_element(D.begin(), D.end()) << endl;

    return 0;
}