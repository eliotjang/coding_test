#include <vector>
#include <algorithm> // sort
#include <functional> // greater

using namespace std;

int solution(vector<int> array, int height) {
    sort(array.begin(), array.end(), greater<int>());
    for (int i = 0; i < array.size(); i++) {
        if (array[i] <= height) return i;
    }
}