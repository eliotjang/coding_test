#include <string>
#include <vector>
#include <algorithm> // find

using namespace std;

vector <int> solution(vector<int> arr) {
    vector<int>::iterator it = find(arr.begin(), arr.end(),  2);
    if (it == arr.end()) return vector<int> {-1};
    auto start = it, end = it;
    while (it != arr.end()) {
        end = it;
        it = find(it + 1, arr.end(), 2);
    }
    return vector<int> (start, end + 1);
}