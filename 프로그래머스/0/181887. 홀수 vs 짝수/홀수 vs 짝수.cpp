#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list) {
    int x = 0, y = 0;
    for (int i = 0; i < num_list.size(); i++) {
        i % 2 != 0 ? x += num_list[i] : y += num_list[i];
    }
    return max(x, y);
}