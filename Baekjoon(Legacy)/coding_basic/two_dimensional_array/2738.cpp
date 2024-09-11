#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int n, m;
    cin >> n >> m;
    vector<vector <int>> vt(n, vector<int>(m, 0));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> vt[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            int t = 0;
            cin >> t;
            vt[i][j] += t;
            cout << vt[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}