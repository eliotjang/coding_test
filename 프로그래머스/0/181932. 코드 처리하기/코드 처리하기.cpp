#include <string>

using namespace std;

string solution(string code) {
    bool mode = 0;
    string ret;
    for (int i = 0; i < code.size(); i++) {
        if (code[i] == '1') {
            mode = mode == 0 ? 1 : 0;
            continue;
        }
        if (mode == 0 && i % 2 == 0) ret.push_back(code[i]);
        if (mode == 1 && i % 2 != 0) ret.push_back(code[i]);
    }
    if (ret.empty()) return string ("EMPTY");
    return ret;
}