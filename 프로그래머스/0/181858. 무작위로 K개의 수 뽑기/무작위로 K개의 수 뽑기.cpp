#include <vector>
#include <unordered_set>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int> answer;
    unordered_set<int> us;
    for (int x : arr) {
        if (answer.size() == k) break;
        if (!us.count(x)) {
            us.insert(x);
            answer.push_back(x);
        }
    }
    if (answer.size() < k) answer.resize(k, -1);
    return answer;
}