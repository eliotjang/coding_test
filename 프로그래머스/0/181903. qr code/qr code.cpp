#include <string>

using namespace std;

string solution(int q, int r, string code) {
    string answer = "";
    for (int i = r; i < code.size(); i += q) {
        answer.append(1, code[i]);
    }
    return answer;
}