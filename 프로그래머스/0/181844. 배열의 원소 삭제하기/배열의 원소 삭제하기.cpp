#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, vector<int> delete_list) {
    for (int x : delete_list) {
        vector<int>::iterator it = find(arr.begin(), arr.end(), x);
        if (it != arr.end()) {
            arr.erase(it);
        }
    }
    return arr;
}