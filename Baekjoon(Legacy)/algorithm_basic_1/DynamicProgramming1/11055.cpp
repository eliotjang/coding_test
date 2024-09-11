#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void go(int p, int* A, int* V);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input.txt","r",stdin);
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    vector<int> D(N);
    vector<int> V(N);
    for (int i=0; i<N; i++) {
        D[i] = 1;
        V[i] = -1;
        for (int j=0; j<i; j++) {
            if (A[j] < A[i] && D[i] < D[j]+1) {
                D[i] = D[j] + 1;
                V[i] = j;
            }
        }
    }
    int ans = D[0];
    int p = 0;
    for (int i=0; i<N; i++) {
        if (ans < D[i]) {
            ans = D[i];
            p = i;
        }
    }
    go(p, &A, &V);

    return 0;
}

void go(int p, int* A, int* V)
{

}