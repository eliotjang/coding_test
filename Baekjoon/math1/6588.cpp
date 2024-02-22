#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    //freopen("input.txt","r",stdin);
    vector<int> prime;
    bool check[1000001] = {false};
    for (int i=2; i<=1000000; i++) {
        if (check[i] == false) {
            prime.push_back(i);
            for (int j=i*2; j<=1000000; j+=i) {
                check[j] = true;
            }
        }
    }
    int n;
    while (cin >> n) {
        bool wrong = true;
        if (n == 0) break;
        for (int i=1; i<prime.size(); i++) {
            if (check[n-prime[i]] == false) {
                wrong = false;
                cout << n << " = " << prime[i] << " + " << n-prime[i] << '\n';
                break;
            }
        }
        if (wrong == true) cout << "Goldbach's conjecture is wrong.\n";
    }
    return 0;
}