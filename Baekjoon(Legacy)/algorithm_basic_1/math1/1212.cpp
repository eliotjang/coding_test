#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    string s, result;
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        int x = s[i] - '0';
        if (x >= 4) {
            x -= 4;
            result += '1';
        } else {
            if (!result.empty()) {
                result += '0';
            }
        }
        if (x >= 2) {
            x -= 2;
            result += '1';
        } else {
            if (!result.empty()) {
                result += '0';
            }
        }
        if (x == 1) {
            result += '1';
        } else {
            result += '0';
        }
    }
    cout << result << endl;
    return 0;
}