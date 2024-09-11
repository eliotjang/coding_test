#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int value, row, col;
    value = 0;
    row = 0;
    col = 0;
    vector<vector<int>> vt(9, vector<int>(9, 0));
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            cin >> vt[i][j];
        }
    }
    
    for (int i=0; i<9; i++) {
        for (int j=0; j<9; j++) {
            if (vt[i][j] > value) {
                value = vt[i][j];
                row = i;
                col = j;
            }
        }
    }
    cout << value << endl;
    cout << row+1 << ' ' << col+1 << endl;
    return 0;
}