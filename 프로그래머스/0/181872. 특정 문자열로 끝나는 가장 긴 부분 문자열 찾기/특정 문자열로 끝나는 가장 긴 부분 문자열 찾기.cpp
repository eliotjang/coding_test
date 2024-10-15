#include <string>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    size_t found = myString.find(pat);
    while (found != string::npos) {
        answer = myString.substr(0, found + pat.size());
        found = myString.find(pat, found + pat.size());
    }
    return answer;
}