#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    // freopen("input.txt","r",stdin);
    vector<vector<char>> vt(5, vector<char>(15, '~'));
    int t = 0;
    for (int i=0; i<5; i++) {
        string s;
        getline(cin, s);
        if (t < s.size()) {
            t = s.size();
        }
        for (int j=0; j<s.size(); j++) {
            vt[i][j] = s[j];
        }
    }
    for (int i=0; i<t; i++) {
        for (int j=0; j<vt.size(); j++) {
            if (vt[j][i] != '~') {
                cout << vt[j][i];
            }   
        }
    }
    return 0;
}