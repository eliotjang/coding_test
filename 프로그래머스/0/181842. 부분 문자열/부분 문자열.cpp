#include <string>

using namespace std;

int solution(string str1, string str2) {
    int answer;
    size_t found = str2.find(str1);
    answer = found != string::npos ? 1 : 0;
    return answer;
}