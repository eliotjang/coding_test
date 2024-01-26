#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 단순 구현
/* int main()
{
    //freopen("input.txt","r",stdin);
    int n, x;
    int tmp = 0;
    cin >> n >> x;
    for (int i=0; i<n; i++) {
        cin >> tmp;
        if (tmp < x) {
            cout << tmp << ' ';
        }
    }
    return 0;
} */

// vector 사용
int main()
{
    //freopen("input.txt","r",stdin);
    int n, x;
    int tmp = 0;
    cin >> n >> x;
    vector<int> vt;
    for (int i=0; i<n; i++) {
        cin >> tmp;
        if (tmp < x) {
            vt.push_back(tmp);
        }
    }
    for (const auto& element: vt) {
        cout << element << ' ';
    }
    return 0;
}