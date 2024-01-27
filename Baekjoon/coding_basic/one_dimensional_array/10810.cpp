#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int n, m, i, j, k;
    cin >> n >> m;
    int* basket = new int[n];
    while(cin >> i >> j >> k) {
        for (int a=i-1; a<j; a++) {
            *(basket + a) = k;
        }
    }
    for(int a=0; a<n; a++) {
        cout << *(basket + a) << ' ';
    }

    delete[] basket;
    return 0;
}