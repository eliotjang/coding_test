#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int k) {
    vector<int>::iterator it;
    for (it = arr.begin(); it != arr.end(); ++it) {
        k % 2 == 0 ? *it += k : *it *= k;
    }
    return arr;
}