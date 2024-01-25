#include <iostream>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    int* pT = new int[t];
    for (int i=0; i<t; i++) {
        cin >> *pT >> *(pT + 1);
        cout << *pT + *(pT + 1) << endl;
    }
    return 0;
}