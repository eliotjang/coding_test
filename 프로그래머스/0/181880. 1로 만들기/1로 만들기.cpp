#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int x = 0;
    for (int n : num_list) {
        while (n != 1) {
            n = n % 2 == 0 ? n / 2 : (n - 1) / 2;
            x++;
        }
    }
    return x;
}