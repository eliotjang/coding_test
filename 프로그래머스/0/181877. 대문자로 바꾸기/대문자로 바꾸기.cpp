#include <string>
#include <algorithm>

using namespace std;

char op_toupper(char c) {
    return toupper(c);
}

string solution(string myString) {
    transform(myString.begin(), myString.end(), myString.begin(), op_toupper);
    return myString;
}