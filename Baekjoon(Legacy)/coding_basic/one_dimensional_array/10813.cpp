#include <iostream>
#include <vector>

using namespace std;

// 포인터 사용
int main_2()
{
    // freopen("input.txt", "r", stdin);
    int n, m, i, j;
    int tmp = 0;
    cin >> n >> m;
    int* basket = new int[n];
    for (int c=0; c<n; c++) {
        *(basket + c) = c+1;
    }
    while(cin >> i >> j) {
        tmp = *(basket + i - 1);
        *(basket + i - 1) = *(basket + j - 1);
        *(basket + j - 1) = tmp;
    }
    for(int c=0; c<n; c++) {
        cout << *(basket + c) << ' ';
    }

    delete[] basket;
    return 0;
}

// Vector 컨테이너 사용
int main()
{
    // freopen("input.txt","r",stdin);
    int n, m, i, j;
    cin >> n >> m;
    vector<int> basket(n, 0);
    vector<int>::iterator it;
    for (int c=0; c<n; c++) {
        basket[c] = c+1;
    }
    while(cin >> i >> j) {
        swap(basket[i-1], basket[j-1]);
    }
    for(it=basket.begin(); it != basket.end(); it++) {
        cout << *it << ' ';
    }   
    return 0;
}