#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    vector<int> d(n+1);
    vector<int> p(n+1);
    for (int i=1; i<=n; i++) {
        cin >> p[i];
    }
    // D[n] = max(D[n-i] + P[i])
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            if (d[i-j] + p[j] > d[i]) {
                d[i] = d[i-j] + p[j];
            }
        }
    }
    cout << d[n] << endl;
    return 0;
}