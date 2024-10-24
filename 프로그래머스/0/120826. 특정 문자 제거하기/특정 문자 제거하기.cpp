#include <string>

using namespace std;

string solution(string my_string, string letter) {
    size_t found = my_string.find(letter);
    while (found != string::npos) {
        my_string.erase(found, letter.size());
        found = my_string.find(letter, found);
    }
    return my_string;
}