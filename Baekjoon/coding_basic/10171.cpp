#include <iostream>
using namespace std;

int main()
{
    string arr2[4];
    arr2[0] = "\\    /\\";
    arr2[1] = " )  ( \')";
    arr2[2] = "(  /  )";
    arr2[3] = " \\(__)|";
    for (int i=0; i<4; i++) {
        cout << arr2[i] << endl;
    }
    return 0;
}