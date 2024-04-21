#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    long long count_two = 0;
    long long count_five = 0;
    long long n, m;
    cin >> n >> m;
    for (long long i=2; i<=n; i*=2) count_two += n/i;
    for (long long i=5; i<=n; i*=5) count_five += n/i;
    for (long long i=2; i<=n-m; i*=2) count_two -= (n-m)/i;
    for (long long i=5; i<=n-m; i*=5) count_five -= (n-m)/i;
    for (long long i=2; i<=m; i*=2) count_two -= m/i;
    for (long long i=5; i<=m; i*=5) count_five -= m/i;
    std::cout << min(count_two, count_five) << endl;
    return 0;
}