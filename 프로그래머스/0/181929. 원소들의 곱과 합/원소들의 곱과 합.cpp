#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0, x = 1, y = 0;
    for (int i = 0; i < num_list.size(); i++) {
        x *= num_list[i];
        y += num_list[i];
    }
    
    answer = x < pow(y, 2) ? 1 : 0;    
    return answer;
}