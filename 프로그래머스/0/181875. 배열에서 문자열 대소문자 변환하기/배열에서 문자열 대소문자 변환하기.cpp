#include <string>
#include <vector>
#include <cctype> // tolower, toupper

using namespace std;

vector<string> solution(vector<string> strArr) {
    for (int i = 0; i < strArr.size(); i++) {
        for (int j = 0; j < strArr[i].size(); j++) {
            char c = strArr[i][j];
            strArr[i][j] = i % 2 != 0 ? toupper(c) : tolower(c);
        }
    }
    return strArr;
}