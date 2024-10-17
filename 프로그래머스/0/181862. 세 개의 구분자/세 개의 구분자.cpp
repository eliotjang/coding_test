#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) {
    vector<string> answer;
    string delimeter = "abc";
    size_t start = 0;
    size_t end = myStr.find_first_of(delimeter);
    while (end != string::npos) {
        if (end - start > 0) {
            answer.push_back(myStr.substr(start, end - start));
        }
        start = end + 1;
        end = myStr.find_first_of(delimeter, start);
    }
    if (myStr.size() - start > 0) {
        answer.push_back(myStr.substr(start, myStr.size() - start));
    }
    if (answer.size() == 0) {
        return vector<string> (1, "EMPTY");
    }
    return answer;
}