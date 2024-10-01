#include <string>
#include <cctype>

using namespace std;

string solution(string myString) {
    string answer = "";
    char x = 'a', y = 'A';
    for (int i = 0; i < myString.size(); i++) {
        if (myString[i] == x) {
            answer.push_back(toupper(x));
            continue;
        }
        if (myString[i] != y && isupper(myString[i])) {
            answer.push_back(tolower(myString[i]));
            continue;
        }
        answer.push_back(myString[i]);
    }
    return answer;
}