#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    string s;
    vector<int> vt(26,-1);
    cin >> s;
    for (int i=0; i<s.size(); i++) {
        int t = s[i] - 'a';
        if (vt[t] == -1)
            vt[t] = i;
    }
    for(const auto& element: vt)
        cout << element << ' ';

    return 0;
}