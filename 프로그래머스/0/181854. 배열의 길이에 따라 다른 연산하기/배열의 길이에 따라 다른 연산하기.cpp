#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) {
    vector<int>::iterator it;
    int size = arr.size();
    for (it = arr.begin(); it != arr.end(); ++it) {
        int pos = it - arr.begin();
        if (size % 2 != 0 && pos % 2 == 0) *it += n;
        if (size % 2 == 0 && pos % 2 != 0) *it += n;
    }
    return arr;
}