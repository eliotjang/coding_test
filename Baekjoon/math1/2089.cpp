#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    string result;
    long long N;
    cin >> N;
    while ( N != 0) {
        if ( N % -2 == 0) {
            result += '0';
            N = N / -2;
        } else {
            result += '1';
            N = (N-1) / -2;
        }
    }
    reverse(result.begin(), result.end());
    cout << result << endl;
    return 0;
}