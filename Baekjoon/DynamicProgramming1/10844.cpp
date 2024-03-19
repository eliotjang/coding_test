#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    const int mod = 1000000000;
    vector<vector<long long>> D (101, vector<long long>(10));
    // D[N][L] = D[N-1][L-1] + D[N-1][L+1]
    for (int i=1; i<10; i++) {
        D[1][i] = 1;
    }
    for (int i=2; i<101; i++) {
        for (int j=0; j<=9; j++) {
            if (j-1 >= 0) {
                D[i][j] += D[i-1][j-1];
            }
            if (j+1 <= 9) {
                D[i][j] += D[i-1][j+1];
            }
            D[i][j] %= mod;
        }
    }
    
    int N;
    long long result = 0;
    cin >> N;
    for (int i=0; i<=9; i++) {
        result += D[N][i];
    }
    cout << result % mod << endl;

    return 0;
}