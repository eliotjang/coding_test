#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 포인터 사용
int ctn_v(int* pArr, int& n, int& v)
{
    int count = 0;
    for (int i=0; i<n; i++) {
        if (*(pArr + i) == v) count++;
    }
    return count;
}

int main_2()
{
    //freopen("input.txt", "r", stdin);
    int n, tmp, v;
    cin >> n;
    int* pArr = new int[n];
    for (int i=0; i<n; i++) {
        cin >> tmp;
        *(pArr + i) = tmp;
    }
    cin >> v;
    cout << ctn_v(pArr, n, v) << endl;
    delete[] pArr;
    return 0;
}

// vector 컨테이너 사용
int main()
{
    //freopen("input.txt","r",stdin);
    int n, v;
    
    cin >> n;
    vector<int> vt(n,0);
    
    for(int i=0; i<n; i++) {
        cin >> vt[i];
    }
    cin >> v;
    cout << count(vt.begin(), vt.end(), v) << endl;
    return 0;
}