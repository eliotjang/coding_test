#include <string>

using namespace std;

string solution(string n_str) {
    string answer = "";
    int pos = 0;
    for (char c : n_str) {
        if (c != '0') break;
        pos++;
    }
    answer = n_str.substr(pos);
    return answer;
}

// another person's solution : use stoi & to_string