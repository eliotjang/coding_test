#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list, int n) {
    int answer;
    vector<int>::iterator it = find(num_list.begin(), num_list.end(), n);
    answer = it != num_list.end() ? 1 : 0;
    return answer;
}