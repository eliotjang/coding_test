#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int n, m, i, j;
    int tmp = 0;
    cin >> n >> m;
    int* pArr = new int[n];
    for (int it=0; it<n; it++) {
        *(pArr + it) = it+1;
    }
    for (int it=0; it<m; it++) {
        cin >> i >> j;
        for(int it2=i-1; it2<(j-i+1)/2; it2++) {
            tmp = pArr[it2];
            pArr[it2] = pArr[j-it2-1];
            pArr[j-it2-1] = tmp;
        }
    }
    for (int it=0; it<n; it++) {
        cout << *(pArr + it) << ' ';
    }
    delete[] pArr;
    return 0;
}