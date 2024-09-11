#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int x, n;
    int a = 0;
    int b = 0;
    int sum = 0;
    cin >> x >> n;
    for (int i=0; i<n; i++) {
        cin >> a >> b;
        sum += a * b;
    }
    if (x == sum) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}