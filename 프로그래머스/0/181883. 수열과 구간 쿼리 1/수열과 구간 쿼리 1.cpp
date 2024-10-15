#include <vector>
#include <algorithm> // transform

using namespace std;

int op_increase (int i) { return ++i; }

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    for (vector<int> q : queries) {
        transform(arr.begin() + q[0], arr.begin() + q[1] + 1, arr.begin() + q[0], op_increase);
    }
    return arr;
}