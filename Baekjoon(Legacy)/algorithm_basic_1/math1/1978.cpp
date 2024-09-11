#include <iostream>
using namespace std;

bool prime(int n)
{
    if (n < 2) return false;
    for (int i=2; i*i<=n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
int main()
{
    // freopen("input.txt","r",stdin);
    int n, t;
    int count_prime = 0;
    cin >> t;
    while(t--) {
        cin >> n;
        if (prime(n)) count_prime++;
    }
    cout << count_prime << endl;
}