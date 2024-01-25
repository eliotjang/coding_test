#include <iostream>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    int n;
    int sum = 0;
    cin >> n;
    sum = n * (n+1) / 2;
    cout << sum << endl;
    return 0;
}