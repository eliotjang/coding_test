#include <string>
#include <vector>
#include <algorithm> // transform

using namespace std;

int cmp_fifty(int x);

vector<int> solution(vector<int> arr) {
    transform(arr.begin(), arr.end(), arr.begin(), cmp_fifty);
    return arr;
}

int cmp_fifty(int x) {
    if (x >= 50 && x % 2 == 0) return x / 2;
    if (x < 50 && x % 2 != 0) return x * 2;
    return x;
}