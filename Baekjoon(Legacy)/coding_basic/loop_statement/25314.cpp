#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    for (int i=0; i < n/4; i++) {
        cout << "long ";
    }
    cout << "int" << endl;
    return 0;
}