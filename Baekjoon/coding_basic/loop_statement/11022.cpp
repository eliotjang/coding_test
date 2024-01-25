#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int t, a, b;
    cin >> t;
    for (int i=1; i<t+1; i++) {
        cin >> a >> b;
        cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << endl;
    }
    return 0;
}