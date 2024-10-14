#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strArr) {
    string s = "ad";
    for(int i = 0; i < strArr.size(); i++) {
        size_t found = strArr[i].find(s);
        if (found != string::npos) {
            strArr.erase(strArr.begin() + i);
            i--;
        }
    }
    return strArr;
}