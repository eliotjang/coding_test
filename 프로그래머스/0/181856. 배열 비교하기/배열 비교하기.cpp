#include <vector>
#include <numeric>

using namespace std;

int solution(vector<int> arr1, vector<int> arr2) {
    int x = 0, y = 0;
    
    if (arr1.size() > arr2.size()) return 1;
    if (arr1.size() < arr2.size()) return -1;
    
    x = accumulate(arr1.begin(), arr1.end(), x);
    y = accumulate(arr2.begin(), arr2.end(), y);
    if (x == y) return 0;
    else if (x > y) return 1;
    else return -1;
}