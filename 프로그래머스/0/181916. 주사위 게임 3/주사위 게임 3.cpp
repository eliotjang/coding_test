#include <vector>
#include <algorithm> // max_element, count, find
#include <cmath> // pow, abs

using namespace std;

int solution(int a, int b, int c, int d) {
    vector<int> v (6);
    v[a-1]++, v[b-1]++, v[c-1]++, v[d-1]++;
    vector<int>::iterator it = max_element(v.begin(), v.end());
    int max_cnt = *it;
    int max_n = it - v.begin() + 1;
    int r_one = find(v.begin(), v.end(), 1) - v.begin() + 1;
    int r_two = find(v.begin(), v.end(), 2) - v.begin() + 1;
    if (max_cnt == 4) return 1111 * max_n;
    if (max_cnt == 3) return pow(10 * max_n + r_one, 2);
    if (max_cnt == 2 && count(v.begin(), v.end(), 2) == 2) {
        int p = r_two;
        int q = find(v.begin() + p, v.end(), 2) - v.begin() + 1;
        return (p + q) * abs(p - q);
    }
    if (max_cnt == 2 && count(v.begin(), v.end(), 1) == 2) {
        int x = 1;
        for (int i = 0; i < v.size(); i++)
            if (v[i] == 1) x *= (i + 1);
        return x;
    }
    if (max_cnt == 1) return r_one;
}