#include <string>
#include <vector>
#include <cmath> // pow

using namespace std;

int solution(int n) {
    int answer = 0;
    int i = n % 2 != 0 ? 1 : 2;
    while(i <= n) {
        answer += n % 2 != 0 ? i : pow(i, 2);
        i += 2;
    }
    return answer;
}