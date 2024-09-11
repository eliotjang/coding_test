#include <iostream>
#include <set>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int n;
    int group = 0;
    string s;
    cin >> n;
    for(int c=0; c<n; c++) {
        cin >> s;
        set<char> check;
        for (int i=0; i<s.size(); i++) {
            check.insert(s[i]);
            if (s[i] == s[i+1]) {
                continue;
            }
            else { // s[i] != s[i+1]
                if (i+1 == s.size()) {
                    group++;
                }
                else {
                    if (check.count(s[i+1])) { // 1 or 0
                        break;
                    } else {
                        check.insert(s[i+1]);
                    }
                }
            }
        }
    }
    cout << group << endl;
    return 0;
}