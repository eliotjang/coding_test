#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    for (int i = 0; i < str_list.size(); i++) {
        switch (str_list[i][0]) {
            case 'l':
                return vector<string> (str_list.begin(), str_list.begin() + i);
            case 'r':
                return vector<string> (str_list.begin() + i + 1, str_list.end());
        }
    }
    return vector<string>();
}