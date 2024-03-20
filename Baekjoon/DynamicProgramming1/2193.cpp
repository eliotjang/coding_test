#include <iostream>
#include <vector>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int N;
    cin >> N;
    vector<vector<int>> D(N+1, vector<int>(2));
    D[1][0] = 0;
    D[1][1] = 1;
    // D[N][0] = D[N-1][0] + D[N-1][1]
    // D[N][1] = D[N-1][0]
    for (int i=2; i<=N; i++) {
        for (int j=0; j<2; j++){
            if (j == 0) {
                D[i][j] = D[N-1][j] + D[N-1][1];
            }
            if (j == 1) {
                D[i][j] = D[N-1][0];
            }
        }
    }

    cout << D[N][0] + D[N][1] << endl;

    return 0;
}