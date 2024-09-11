#include <string>

using namespace std;

int solution(string my_string, string is_prefix) {
    string s = my_string.substr(0, is_prefix.size());
    if (is_prefix == s) {
        return 1;
    }
    return 0;
}

// another person's solution : use string::find & string::npos