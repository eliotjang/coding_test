#include <vector>
#include <algorithm> // count

using namespace std;

int solution(vector<int> array, int n) {
    return count(array.begin(), array.end(), n);
}