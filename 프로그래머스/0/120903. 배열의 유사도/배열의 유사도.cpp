#include <string>
#include <vector>
#include <algorithm> // find

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    for (string s : s1) {
        vector<string>::iterator it = find(s2.begin(), s2.end(), s);
        if (it != s2.end()) answer++;
    }
    return answer;
}