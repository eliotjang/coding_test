#include <iostream>
using namespace std;

int main()
{
//    freopen("input.txt", "r", stdin);
    int x, y, tmp;
    cin >> x >> y;
    tmp = y;
    for (int i=0; i<3;i++) {
        cout << x * (tmp % 10) << endl;
        tmp /= 10;
    }
    cout << x * y << endl;
    return 0;
}