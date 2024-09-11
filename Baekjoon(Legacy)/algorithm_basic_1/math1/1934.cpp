#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    while(b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}
int LCM(int a, int b, int g)
{
    return a * b / g;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt", "r", stdin);
    int t, a, b;
    cin >> t;
    while(t--) {
        cin >> a >> b;
        cout << LCM(a, b, GCD(a, b)) << endl;
    }
    return 0;
}