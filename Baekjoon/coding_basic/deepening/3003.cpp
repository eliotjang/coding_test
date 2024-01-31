#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int* pieces = new int[6]{1,1,2,2,2,8};
    for (int i=0; i<6; i++) {
        int t;
        cin >> t;
        *(pieces + i) -= t;
    }
    for (int i=0; i<6; i++) {
        cout << *(pieces + i) << ' ';
    }

    delete[] pieces;
    return 0;
}