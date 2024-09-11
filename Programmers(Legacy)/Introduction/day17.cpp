// 자연수 뒤집어 배열로 만들기
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    while (n / 10 != 0) {
        answer.push_back(n % 10);
        n /= 10;
    }
    answer.push_back(n);
    return answer;
}