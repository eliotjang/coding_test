#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    size_t start = 0;
    size_t end = my_string.find_first_of(" ");
    while (end <= string::npos) {
        string s = my_string.substr(start, end - start);
        if (s.size() > 0) {
            answer.push_back(s);    
        }
        if (end == string::npos) {
            break;
        }
        start = end + 1;
        end = my_string.find_first_of(" ", start);
    }
    return answer;
}