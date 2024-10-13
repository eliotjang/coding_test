#include <vector>
#include <cmath> // pow

using namespace std;

int solution(int a, int b, int c) {
    int x = a + b + c;
    int y = pow(a, 2) + pow(b, 2) + pow(c, 2);
    int z = pow(a, 3) + pow(b, 3) + pow(c, 3);
    if (a == b && b == c && c == a) return x * y * z;
    if (a != b && b != c && c != a) return x;
    return x * y;
}