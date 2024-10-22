#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    for (int i = 0; i < picture.size(); i += k) {
        for (int j = 0; j < picture[i].size(); j += k) {
            picture[i].insert(j, k - 1, picture[i][j]);
        }
        picture.insert(picture.begin() + i, k - 1, picture[i]);
    }
    return picture;
}