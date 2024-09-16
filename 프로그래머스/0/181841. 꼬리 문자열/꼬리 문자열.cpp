#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) {
    string answer = "";
    vector<string>::iterator it;
    for (it = str_list.begin(); it != str_list.end(); ++it) {
        size_t found = it->find(ex);
        if (found == string::npos) {
            answer.append(*it);
        }
    }
    return answer;
}