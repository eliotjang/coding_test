#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);

    const int max = 1000001;
    int T;
    bool prime[max] = {false};
    bool check[max] = {false};
    for (int i=2; i<max; i++) {
        if (check[i] == false) {
            prime[i] = true;            
            for (int j=i+i; j<max; j+=i) {
                check[j] = true;
            }
        }
    }
    cin >> T;
    while(T--) {
        int N, count = 0;
        cin >> N;
        for (int i=2; i<N/2+1; i++) {
            if (prime[i] == true && prime[N-i] == true) {
                // cout << i << " + " << N-i << " = " << N << endl;
                count++;
            }
        }
        cout << count << '\n';
    }
    /* for (const auto& E : v) {
        cout << E << '\n';
    } */
    return 0;
}