#include <string>  // find_first_of
#include <cctype>  // toupper

using namespace std;

string solution(string my_string, string alp) {
    char c = alp[0];
    size_t found = my_string.find_first_of(c);
    while (found != string::npos) {
        my_string[found] = toupper(c);
        found = my_string.find_first_of(c, found + 1);
    }
    return my_string;
}