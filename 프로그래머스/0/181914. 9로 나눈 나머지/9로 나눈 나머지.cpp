#include <string>
#include <numeric> // accumulate

using namespace std;

int op_plus(int x, char c);

int solution(string number) {
    int answer = accumulate(number.begin(), number.end(), 0, op_plus);
    return answer % 9;
}

int op_plus(int x, char c) {
    return x + c - '0';
}