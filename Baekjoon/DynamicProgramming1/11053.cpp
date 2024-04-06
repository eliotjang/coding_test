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
    vector<int> D(N, 1);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    D[0] = 1;
    for (int i=1; i<N; i++) {
        for (int j=0; j<i; j++) {
            if (A[j] < A[i] && D[i] < D[j] + 1) {
                D[i]++;
            }
        }
    }
    cout << *max_element(D.begin(), D.end()) << endl;

    return 0;
}