#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    int size = 0, idx = 0;
    for (const int x : arr) {
        size += x;
    }
    
    vector<int> answer(size);
    for (const int x : arr) {
        vector<int> t(x, x);
        copy(t.begin(), t.end(), answer.begin() + idx);
        idx += x;
    }
    
    return answer;
}

// another person's solution : use insert