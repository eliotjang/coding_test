// 백준 단계별 풀이 - 입출력과 사칙연산
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    a = 0;
    b = 0;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a - b * (a / b) << endl;
}