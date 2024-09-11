#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt", "r", stdin);
    int x;
    cin >> x;
    if (90 <= x && x <= 100) {
        cout << 'A' << endl;
    }
    else if (80 <= x && x <= 89){
        cout << 'B' << endl;
    }
    else if (70 <= x && x <= 79) {
        cout << 'C' << endl;
    }
    else if (60 <= x && x <= 69) {
        cout << 'D' << endl;
    }
    else {
        cout << 'F' << endl;
    }
    return 0;
}