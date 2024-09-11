#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int x;
    if (cin >> x; x % 4 == 0 && x % 100 != 0) {
        cout << 1 << endl;
    }
    else if (x % 400 == 0) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}