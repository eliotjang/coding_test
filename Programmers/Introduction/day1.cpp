#include <iostream>
using namespace std;

int solution(int num1, int num2)
{
    int answer = num1 - num2;
    return answer;
}

int main()
{
    freopen("input.txt","r",stdin);
    int num1, num2;
    cin >> num1 >> num2;
    cout << solution(num1, num2) << endl;
}