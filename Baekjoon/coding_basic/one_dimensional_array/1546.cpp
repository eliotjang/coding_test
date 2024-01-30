#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
// 포인터 사용
int main_2()
{
    //freopen("input.txt","r",stdin);
    int n, v;
    float r = 0.0f;
    cin >> n;
    float* pArr = new float[n];
    for (int i=0; i<n; i++) {
        cin >> v;
        *(pArr + i) = v;
    }
    float tmp = *pArr;
    for (int i=1; i<n; i++) {
        if (tmp < *(pArr + i)) {
            tmp = *(pArr + i);
        }
    }
    for (int i=0; i<n; i++) {
        r += *(pArr + i) / tmp * 100;
    }
    cout << fixed << setprecision(3) << r / n << endl;

    delete[] pArr;
    return 0;
}
// Vector 컨테이너의 max_element() 사용
int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    float r = 0.0f;
    cin >> n;
    vector<float> vt(n,0);
    for (int i=0; i<n; i++) {
        cin >> vt[i];
    }
    int max = *max_element(vt.begin(), vt.end());
    for (int i=0; i<n; i++) {
        r += vt[i] / max * 100;
    }
    cout << fixed << setprecision(3) << r / n << endl;
}