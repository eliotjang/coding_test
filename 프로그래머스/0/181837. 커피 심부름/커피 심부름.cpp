#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> order) {
    map<string, int> menu {
        {"americano", 4500},
        {"cafelatte", 5000},
        {"anything", 4500}
    };
    int x = 0;
    for (string s : order) {
        for (auto it = menu.begin(); it != menu.end(); ++it) {
            size_t found = s.find(it->first);
            if (found != string::npos) x += it->second;
        }
    }
    return x;
}