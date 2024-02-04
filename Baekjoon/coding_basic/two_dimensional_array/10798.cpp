#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    freopen("input.txt","r",stdin);
    vector<vector<char>> vt(5);
    for (int i=0; i<5; i++) {
        string s;
        getline(cin, s);
        for (int j=0; j<s.size(); j++) {
            vt[i][0] = s[j];
        }
    }
    for (int i=0; i<5; i++) {
        for (int j=0; j<5; j++) {
            cout << vt[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}