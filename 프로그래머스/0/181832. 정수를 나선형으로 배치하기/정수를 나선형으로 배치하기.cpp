#include <vector>

using namespace std;

vector<vector<int>> solution(int n) {
    vector<vector<int>> dir {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int x = 1, r = 0, c = 0, d = 0;
    vector<vector<int>> v (n, vector<int> (n));
    while (x <= n * n) {
        v[r][c] = x;
        int tmp_r = r + dir[d][0];
        int tmp_c = c + dir[d][1];
        if (tmp_r == n || tmp_r == -1 || tmp_c == n || tmp_c == -1 || v[tmp_r][tmp_c] != 0) {
            d = ++d % 4;
            tmp_r = r + dir[d][0];
            tmp_c = c + dir[d][1];
        }
        r = tmp_r;
        c = tmp_c;
        x++;
    }
    return v;
}