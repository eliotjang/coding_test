#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    freopen("input.txt","r",stdin);

    const int max = 1000000;
    int T;
    vector<int> v;
    bool check[max+1];
    for (int i=2; i<=max; i++) {
        if (check[i] == false) {
            v.push_back(i);
            for (int j=i+i; j<=max; j+=i) {
                check[j] = true;
            }
        }
    }
    cin >> T;
    while(T--) {
        int N, count = 0;
        cin >> N;
        for (int i=0; i<v.size(); i++) {
            for (int j=i; j<v.size(); j++) {
                if (N == v[i] + v[j]) {
                    count++;
                    continue;
                }
            }
        }
        if ( count != 0) {
            cout << count << '\n';
        }
    }
    /* for (const auto& E : v) {
        cout << E << '\n';
    } */
    return 0;
}