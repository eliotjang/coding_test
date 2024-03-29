#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 포인터 사용
int main_2()
{
    // freopen("input.txt","r",stdin);
    int tmp = 0;
    int* pArr = new int[9];
    for (int i=0; i<9; i++) {
        cin >> *(pArr + i);
    }
    for (int i=1; i<9; i++) {
        if(*(pArr + tmp) < *(pArr + i)) {
            tmp = i;
        }
    }
    cout << *(pArr + tmp) << '\n' << tmp+1 << endl;

    delete[] pArr;
    return 0;
}

//vector 컨테이너 사용
int main()
{
    // freopen("input.txt","r",stdin);
    vector<int> vt(9,0);
    for (int i=0; i<9; i++) {
        cin >> vt[i];
    }
    int max = *max_element(vt.begin(), vt.end());
    int max_idx = max_element(vt.begin(), vt.end()) - vt.begin();
    cout << max << '\n' << max_idx + 1 << endl;
    return 0;
}