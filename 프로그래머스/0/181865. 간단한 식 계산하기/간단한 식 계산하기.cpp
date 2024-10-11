#include <string>

using namespace std;

int solution(string binomial) {
    int a, b;
    size_t found = binomial.find(' ');
    a = stoi(binomial.substr(0, found));
    b = stoi(binomial.substr(found + 3, binomial.size() - found + 3));
    char c = binomial.substr(found + 1, 1)[0];
    switch (c) {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        default:
            return 0;
    }
}