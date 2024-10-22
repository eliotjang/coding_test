#include <vector>
#include <algorithm> // sort

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for (vector<int> q : queries) {
        bool flag = false;
        vector<int> v (arr.begin() + q[0], arr.begin() + q[1] + 1);
        sort(v.begin(), v.end());
        for (int x : v) {
            if (x > q[2]) {
                answer.push_back(x);
                flag = true;
                break;
            }
        }
        if (!flag) answer.push_back(-1);
    }
    return answer;
}