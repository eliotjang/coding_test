#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    size_t n = included.size();
    int s = n * (2 * a + (n - 1) * d) / 2;
    for (int i = 0; i < n; i++) {
        if (!included[i]) s -= a + i * d;
    }
    return s;
}