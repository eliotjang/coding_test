#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int N;
    cin >> N;
    int* memo = new int[N+1]();
    // D[n] = min(D[n-1], D[n/3], D[n/2]) + 1
    if (N == 1) {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 2; i<=N; i++) {
        memo[i] = memo[i-1] + 1;
        if (i%2 == 0 && memo[i] > memo[i/2] + 1) {
            memo[i] = memo[i/2] + 1;
        }
        if (i%3 == 0 && memo[i] > memo[i/3] + 1) {
            memo[i] = memo[i/3] + 1;
        }
    }
    cout << memo[N] << endl;
    delete[] memo;
    return 0;
}