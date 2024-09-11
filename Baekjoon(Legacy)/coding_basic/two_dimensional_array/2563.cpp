#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int arr[100][100] = { 0, };
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        for (int j=x; j<x+10; j++) {
            for (int k=y; k<y+10; k++) {
                arr[j][k] = 1;
            }
        }
    }
    int sum = 0;
    for (int i=0; i<100; i++) {
        for (int j=0; j<100; j++) {
            if (arr[i][j] > 0) {
                sum++;
            }
        }
    }
    cout << sum;
    return 0;
}