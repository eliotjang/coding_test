#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int n, sum = 0;
    string s;
    cin >> n >> s;
    for (int i=0; i<s.size(); i++) {
        // sum += int(s[i] - 48);
        sum += (int)s[i] - '0';
    }
    cout << sum << endl;
    return 0;
}