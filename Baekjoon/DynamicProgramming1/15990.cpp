#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    
    const int max = 100001;
    const long long mod = 1000000009LL;
    vector<vector <long long>> D(max, vector<long long>(4));
    
    for (int i=1; i<max; i++) {
        if (i-1 >= 0) {
            D[i][1] = D[i-1][2] + D[i-1][3];
            if (i == 1)
                D[1][1] = 1;
        }
        if (i-2 >= 0) {
            D[i][2] = D[i-2][1] + D[i-2][3];
            if (i == 2)
                D[2][2] = 1;
        }
        if (i-3 >= 0) {
            D[i][3] = D[i-3][1] + D[i-3][2];
            if (i == 3)
                D[3][3] = 1;
        }
        D[i][1] %= mod;
        D[i][2] %= mod;
        D[i][3] %= mod;
    }

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << (D[n][1] + D[n][2] + D[n][3])%mod << endl;
    }
    return 0;
}