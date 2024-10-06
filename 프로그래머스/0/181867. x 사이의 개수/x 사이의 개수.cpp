#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) {
    vector<int> answer;
    char c = 'x';
    size_t start = 0;
    size_t end = myString.find(c);
    while (end != string::npos) {
        answer.push_back(end - start);
        start = end + 1;
        end = myString.find(c, start);
    }
    answer.push_back(myString.size() - start);
    return answer;
}