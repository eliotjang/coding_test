#include <iostream>
#include <vector>
using namespace std;

long long GCD(long long a, long long b)
{
    while(b != 0) {
        long long r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    // freopen("input.txt","r",stdin);
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v(n);
        for (int i=0; i<n; i++) {
            cin >> v[i];
        }
        long long gcd_sum = 0;
        for (int i=0; i<n-1; i++) {
            for (int j=i+1; j<n; j++) {
                gcd_sum += GCD(v[i], v[j]);
            }
        }
        cout << gcd_sum << endl;
    }
    return 0;
}