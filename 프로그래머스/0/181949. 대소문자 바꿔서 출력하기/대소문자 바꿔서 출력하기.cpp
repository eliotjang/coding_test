#include <iostream>
#include <string>
#include <cctype> // islower, toupper, tolower

using namespace std;

int main(void) {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        str[i] = (islower(str[i])) ? toupper(str[i]) : tolower(str[i]);
    }
    cout << str << endl;
    return 0;
}