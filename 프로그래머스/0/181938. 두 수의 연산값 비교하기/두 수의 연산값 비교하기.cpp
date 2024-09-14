#include <string>

using namespace std;

int solution(int a, int b) {
    int answer = 0, x, y;
    x = stoi(to_string(a) + to_string(b));
    y = 2 * a * b;
    answer = x >= y ? x : y;
    return answer;
}