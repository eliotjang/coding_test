#include <iostream>
using namespace std;

int cal_big(int* arr)
{
    int result = *arr;
    for (int i = 1; i < 3; i++) {
        if(result < *(arr+i)) {
            result = *(arr+i);
        }
    }
    return result;
}

int main()
{
    //freopen("input.txt", "r", stdin);
    int x, y, z;
    cin >> x >> y >> z;
    int arr[3] = {x, y, z};
    if (x == y && y == z && z == x) {
        cout << 10000 + x * 1000 << endl;
    }
    else if (x == y) {
        cout << 1000 + x * 100 << endl;
    }
    else if (y == z) {
        cout << 1000 + y * 100 << endl;
    }
    else if (z == x) {
        cout << 1000 + z * 100 << endl;
    }
    else {
        cout << cal_big(&arr[0]) * 100 << endl;
    }

    return 0;
}