#include <string>
#include <vector>
#include <map>
#include <algorithm> // max

using namespace std;

int solution(vector<string> strArr) {
    int x = 0;
    map<int, int> m;
    for (string s : strArr) {
        int n = s.size();
        m[n] = m.count(n) ? m[n] + 1 : 1;
    }
    for (map<int, int>::iterator it = m.begin(); it != m.end(); ++it) {
        x = max(x, it->second);
    }
    return x;
}