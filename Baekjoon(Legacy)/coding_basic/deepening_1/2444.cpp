#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=n - (i+1); j>0; j--) {
            cout << ' ';
        }
        for (int k=0; k < 2*i+1; k++) {
            cout << '*';
        }
        cout << endl;
    }
    for (int i=0; i<n; i++) {
        for (int j=n-(i+1); j<n; j++) {
            cout << ' ';
        }
        for (int k=2*(n-i)-3; k>0; k--)
            cout << '*';
        cout << endl;
    }
    return 0;
}