#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int x = 0;
    vector<int> v1 (arr), v2;
    while (v1 != v2) {
        v2 = v1;
        for (int i = 0; i < v1.size(); i++) {
            if (v1[i] >= 50 && v1[i] % 2 == 0) v1[i] /= 2;
            if (v1[i] < 50 && v1[i] % 2 != 0) v1[i] *= 2 + 1;
        }
        if (x == 0 && v1 == v2) break;
        x++;
    }
    return x;
}