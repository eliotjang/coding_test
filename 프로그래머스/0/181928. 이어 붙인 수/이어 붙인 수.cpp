#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string odd, even;
    
    for (int i = 0; i < num_list.size(); i++) {
        num_list[i] % 2 != 0 ? odd.append(1, static_cast<char>(num_list[i] + '0')) : even.append(1, static_cast<char>(num_list[i] + '0'));
    }
    return stoi(odd) + stoi(even);
}

// another person's solution : use to_string