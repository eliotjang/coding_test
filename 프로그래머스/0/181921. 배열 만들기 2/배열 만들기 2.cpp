#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for (int i = l; i <= r; i++) {
        string s = to_string(i);
        size_t found = s.find_first_not_of("05");
        if (found != string::npos) continue;
        answer.push_back(i);
    }
    if (answer.empty()) return vector<int> {-1};
    return answer;
}