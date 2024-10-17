#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str, answer;
    int n;
    cin >> str >> n;
    for (int i = 0; i < n; i++) {
        answer.append(str);
    }
    cout << answer << endl;
    return 0;
}