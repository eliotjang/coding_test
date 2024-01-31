#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    string s1, s2;
    cin >> s1;
    s2 = s1;
    reverse(s1.begin(), s1.end());
    if (s1 == s2) {
        cout << 1 << endl;
    }
    else {
        cout << 0 << endl;
    }
    return 0;
}