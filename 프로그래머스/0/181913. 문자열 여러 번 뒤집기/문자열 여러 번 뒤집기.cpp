#include <string>
#include <vector>
#include <algorithm> // reverse

using namespace std;

string solution(string my_string, vector<vector<int>> queries) {
    for (vector<int> q : queries) {
        reverse(my_string.begin() + q[0], my_string.begin() + q[1] + 1);
    }
    return my_string;
}