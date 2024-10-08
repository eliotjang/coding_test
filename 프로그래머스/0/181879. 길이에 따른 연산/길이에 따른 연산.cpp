#include <vector>
#include <numeric> // accumulate
#include <functional> // plus, multiplies

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    if (num_list.size() >= 11) {
        answer = accumulate(num_list.begin(), num_list.end(), 0, std::plus<int>());
    } else {
        answer = accumulate(num_list.begin(), num_list.end(), 1, std::multiplies<int>());
    }
    return answer;
}