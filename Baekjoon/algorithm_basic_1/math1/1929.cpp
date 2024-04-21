#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    bool check[1000001];
    int m, n;
    cin >> m >> n;
    vector<int> prime;
    for ( int i=2; i<=n; i++) {
        if (check[i] == false) {
            if (m <= i) {
                prime.push_back(i);
            }
            for (int j = i*2; j<=n; j+=i) {
                check[j] = true;
            }
        }
    }
    for (const auto &e : prime) {
        cout << e << '\n';
    }
}