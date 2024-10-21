#include <string>
#include <vector>
#include <cctype> // isupper

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer (52);
    for (char c : my_string) {
        if (isupper(c)) {
            answer[c - 'A']++;
        } else {
            answer[c - 'a' + 26]++;
        }
    }
    return answer;
}