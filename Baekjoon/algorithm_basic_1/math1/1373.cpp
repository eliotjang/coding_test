#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    string n;
    vector<int> v;
    int tmp = 0;
    int flag = 0;
    cin >> n;
    reverse(n.begin(), n.end());
    for (int i=0; i<n.size(); i++, flag++) {
        if (flag%3 == 0 && n[i] == '1') {
            tmp += 1;
        }
        else if (flag%3 == 1 && n[i] == '1') {
            tmp += 2 * 1;
        }
        else if (flag%3 == 2 && n[i] == '1') {
            tmp += 2 * 2 * 1;
        }
        if (flag%3 == 2) {
            v.push_back(tmp);
            tmp = 0;
        }
    }
    if (flag%3 != 0) {
        v.push_back(tmp);
        tmp = 0;
    }
    for (int i=v.size()-1; i>=0; i--) {
        cout << v[i];
    }

    return 0;
}