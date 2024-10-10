#include <string>
#include <vector>
#include <map> // map

using namespace std;

string solution(vector<int> numLog) {
    string answer = "";
    map<int, char> m = { {1, 'w'}, {-1, 's'}, {10, 'd'}, {-10, 'a'} };
    for (int i = 1; i < numLog.size(); i++) {
        int x = numLog[i] - numLog[i - 1];
        answer.append(1, m.at(x));
    }
    return answer;
}