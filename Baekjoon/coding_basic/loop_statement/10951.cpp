#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int a, b;
    // case 1:
    /* while (true)
    {
        cin >> a >> b;
        if (cin.eof()) break;
        cout << a + b << endl;
    } */
    // case 2:
    while (cin >> a >> b)
    {
        cout << a + b << endl;
    }
    return 0;
}