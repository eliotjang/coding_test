#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    vector<int>::iterator it;
    for (it = numbers.begin(); it != numbers.end(); it++) {
        answer += *it;
    }
    answer /= numbers.size();
    return answer;
}