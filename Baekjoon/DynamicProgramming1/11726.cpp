#include <iostream>
using namespace std;
int d[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    d[0] = 1;
    d[1] = 1;
    for (int i=2; i<=n; i++) {
        d[i] = (d[i-1] + d[i-2]) % 10007;
    }
    cout << d[n] << endl;
    return 0;
}