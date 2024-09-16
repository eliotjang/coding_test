#include <string>
#include <vector>
#include <set>

using namespace std;

vector<string> solution(string my_string) {
    set<string> str_set;
    set<string>::iterator it;
    for (int i = 0; i < my_string.size(); i++) {
        string s = my_string.substr(i, my_string.size() - i);
        str_set.insert(s);
    }
    
    vector<string> answer(str_set.begin(), str_set.end());
    return answer;
}