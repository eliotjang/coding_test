// 백준 단계별 풀이 - 입출력과 사칙연산
#include <iostream>
using namespace std;

int main()
{
    long A, B, C;
    cin >> A >> B >> C;
    cout << (A+B)%C << endl;
    cout << ((A%C) + (B%C))%C << endl;
    cout << (A*B)%C << endl;
    cout << ((A%C) * (B%C))%C << endl;
    return 0;
}