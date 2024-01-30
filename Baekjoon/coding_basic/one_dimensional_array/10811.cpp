#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 수학을 사용하여 포인터로 구현
int main_2()
{
    //freopen("input.txt","r",stdin);
    int n, m, i, j;
    int tmp = 0;
    cin >> n >> m;
    int* pArr = new int[n];
    for (int it=0; it<n; it++) {
        *(pArr + it) = it+1;
    }
    for (int it=0; it<m; it++) {
        cin >> i >> j;
        for(int it2=i-1, it3=j-1; it2<(j-i+1)/2 + (i-1); it2++, it3--) {
            tmp = pArr[it2];
            pArr[it2] = pArr[it3];
            pArr[it3] = tmp;
        }
    }
    for (int it=0; it<n; it++) {
        cout << *(pArr + it) << ' ';
    }
    delete[] pArr;
    return 0;
}
// Vector 컨테이너의 reverse() 함수 사용
int main()
{
    //freopen("input.txt","r",stdin);
    int n, m, i, j;
    cin >> n >> m;
    vector<int> vt(n,0);
    for(int it=0; it<n; it++) {
        vt[it] = it+1;
    }
    for(int it=0; it<m; it++) {
        cin >> i >> j;
        reverse(vt.begin()+i-1, vt.begin()+j);
    }
    for (int it=0; it<n; it++) {
        cout << vt[it] << ' ';
    }
    return 0;
}