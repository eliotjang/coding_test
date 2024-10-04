#include <string>
#include <cctype> // tolower
#include <algorithm> // transform

using namespace std;

char op_lower(char);

int solution(string myString, string pat) {
    transform(myString.begin(), myString.end(), myString.begin(), op_lower);
    transform(pat.begin(), pat.end(), pat.begin(), op_lower);
    size_t found = myString.find(pat);
    return found != string::npos;
}

char op_lower(char c) {
    return tolower(c);
}
