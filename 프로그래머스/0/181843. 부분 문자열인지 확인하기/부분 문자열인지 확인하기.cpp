#include <string>

using namespace std;

int solution(string my_string, string target) {
    int answer;
    size_t found = my_string.find(target);
    answer = found != string::npos ? 1 : 0;
    return answer;
}