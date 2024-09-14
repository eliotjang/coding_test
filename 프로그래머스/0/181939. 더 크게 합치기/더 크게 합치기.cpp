#include <string>
#include <algorithm>

using namespace std;

int solution(int a, int b) {
    int answer = 0, x = 0, y = 0;
    x = stoi(to_string(a) + to_string(b));
    y = stoi(to_string(b) + to_string(a));
    answer = max(x, y);
    return answer;
}