#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int count = 0;
    string s;
    while (cin >> s) {
        count++;
    }
    cout << count << endl;
    return 0;
}