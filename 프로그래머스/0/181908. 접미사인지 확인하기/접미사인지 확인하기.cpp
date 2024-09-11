#include <string>

using namespace std;

int solution(string my_string, string is_suffix) {
    int size = my_string.size() - is_suffix.size();
    if (size < 0)
        return 0;
    
    string s = my_string.substr(size);
    if (s == is_suffix) {
        return 1;
    } else {
        return 0;
    }
}
