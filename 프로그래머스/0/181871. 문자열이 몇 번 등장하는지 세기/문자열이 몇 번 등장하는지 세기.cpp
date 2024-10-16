#include <string>

using namespace std;

int solution(string myString, string pat) {
    int answer = 0;
    size_t start = 0;
    size_t end = myString.find(pat);
    while (end != string::npos) {
        answer++;
        start = end + 1;
        end = myString.find(pat, start);
    }
    return answer;
}