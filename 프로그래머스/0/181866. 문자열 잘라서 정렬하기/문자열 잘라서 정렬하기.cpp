#include <string>
#include <vector>
#include <algorithm> // sort
#include <iostream>

using namespace std;

vector<string> solution(string myString) {
    string s = "x";
    vector<string> answer;
    size_t start = 0;
    size_t end = myString.find(s);
    while (end != string::npos) {
        if (end - start > 0) {
            answer.push_back(myString.substr(start, end - start));
        }
        start = end + 1;
        end = myString.find(s, start);
    }
    int n = myString.size() - start;
    if (n > 0) {
        answer.push_back(myString.substr(start, n));
    }
    sort(answer.begin(), answer.end());
    return answer;
}