#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    vector<int>::iterator it;
    for(it = arr.begin(); it != arr.end(); it++) {
        answer += *it;
    }
    answer /= arr.size();
    return answer;
}