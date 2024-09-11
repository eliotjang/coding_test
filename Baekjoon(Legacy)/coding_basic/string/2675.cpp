#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int r, t;
    string s;
    cin >> t;
    for (int i=0; i<t; i++) {
        cin >> r >> s;
        for (int j=0; j<s.size(); j++) {
            for (int k=0; k<r; k++) {
                cout << s[j];
            }
        }
        cout << endl;
    }
    return 0;
}