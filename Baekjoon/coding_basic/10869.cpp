#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 0;
    b = 0;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a - b * (a / b) << endl;
}