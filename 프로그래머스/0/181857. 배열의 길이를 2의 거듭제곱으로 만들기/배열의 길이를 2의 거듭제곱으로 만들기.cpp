#include <vector>
#include <cmath> // log2, ceil, pow

using namespace std;

vector<int> solution(vector<int> arr) {
    int x = ceil(log2(arr.size()));
    int n = pow(2, x) - arr.size();
    while (n--) {
        arr.push_back(0);
    }
    return arr;
}