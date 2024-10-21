#include <string>
#include <algorithm> // reverse

using namespace std;

string solution(string a, string b) {
    string s;
    if (a.size() < b.size()) swap(a, b);
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    bool over = false;
    for (int i = 0; i < a.size(); i++) {
        int x = a[i] - '0', z = 0;
        int y = i >= b.size() ? 0 : b[i] - '0';
        z = x + y;
        if (over) {
            z++;
            over = false;
        }
        if (z > 9) over = true;
        s.push_back(z % 10 + '0');
    }
    if (over) s.push_back('1');
    reverse(s.begin(), s.end());
    return s;
}