#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr) {
    if (arr.size() > arr[0].size()) {
        for (int i = 0; i < arr.size(); i++) arr[i].resize(arr.size(), 0);
    } else {
        int n = arr[0].size() - arr.size();
        while (n--) arr.push_back(vector<int> (arr[0].size(), 0));
    }
    return arr;
}