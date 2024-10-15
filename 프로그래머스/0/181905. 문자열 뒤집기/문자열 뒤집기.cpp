#include <string>

using namespace std;

string solution(string my_string, int s, int e) {
    int rs = my_string.size() - e - 1;
    int re = my_string.size() - s - 1;
    string pat (my_string.rbegin() + rs, my_string.rbegin() + re + 1);
    my_string.replace(s, pat.size(), pat);
    return my_string;
}