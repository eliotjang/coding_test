#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    char delimeter = ' ';
    size_t start = 0;
    size_t end = my_string.find(delimeter);
    while (end <= string::npos) {
        answer.push_back(my_string.substr(start, end - start));
        if (end == string::npos) break;
        start = end + 1;
        end = my_string.find(delimeter, start);
    }
    return answer;
}