#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> intStrs, int k, int s, int l) {
    vector<int> answer;
    for (string str : intStrs) {
        int x = stoi(str.substr(s, l));
        if (x > k) answer.push_back(x);
    }
    return answer;
}