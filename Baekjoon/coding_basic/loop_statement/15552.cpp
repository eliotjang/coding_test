#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    //freopen("input.txt", "r", stdin);
    int a, b, t;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return 0;
}