#include <string>

using namespace std;

string solution(string rny_string) {
    string x = "m", y = "rn";
    size_t found = rny_string.find(x);
    while (found != string::npos) {
        rny_string.erase(found, x.size());
        rny_string.insert(found, y);
        found = rny_string.find(x, found + x.size());
    }
    return rny_string;
}