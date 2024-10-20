#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    for (int i = 0; i < arr.size(); i++) {
        if (stk.empty()) {
            stk.push_back(arr[i]);
        } else {
            if (stk.back() == arr[i]) {
                stk.erase(stk.end() - 1);
            } else {
                stk.push_back(arr[i]);
            }
        }
    }
    if (stk.empty()) return vector<int> {-1};
    return stk;
}