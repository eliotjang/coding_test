#include <vector>
#include <map>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    map<int, int> m;
    map<int, int>::iterator it;
    for (int i = 0; i < attendance.size(); i++) {
        if (attendance[i]) {
            m[rank[i]] = i;
        }
    }
    int a = m.begin()->second;
    int b = next(m.begin(), 1)->second;
    int c = next(m.begin(), 2)->second;
    return 10000 * a + 100 * b + c;
}