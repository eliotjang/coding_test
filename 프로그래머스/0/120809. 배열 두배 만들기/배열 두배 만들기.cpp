#include <vector>
#include <algorithm> // transform

using namespace std;

vector<int> solution(vector<int> numbers) {
    transform(numbers.begin(), numbers.end(), numbers.begin(), [](int i){ return i * 2; });
    return numbers;
}