#include <iostream>
using namespace std;

int solution(int age) {
    int answer = 2023 - age;
    return answer;
}

int main() {
    freopen("input.txt","r",stdin);
    int age;
    cin >> age;
    
    cout << solution(age) << endl;

    return 0;
}