#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int a, b, c;
    int h = 0;
    int m = 0;
    cin >> a >> b >> c;
    h = c / 60;
    m = c % 60;
    if (a + h > 23) {
        if (b + m > 59) {
            a = (a + h) % 24 + 1;
            b = (b + m) % 60;
        }
        else {
            a = (a + h) % 24;
            b = b + m;
        }
    }
    else {
        if (b + m > 59) {
            a = a + h + 1;
            b = (b + m) % 60;
        }
        else {
            a = a + h;
            b = b + m;
        }
        if (a > 23) {
            a = 0;
        }
    }
    cout << a << ' ' << b << endl;
    return 0;
}