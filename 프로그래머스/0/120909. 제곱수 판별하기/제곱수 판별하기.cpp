#include <cmath> // sqrt

int solution(int n) {
    int sr = sqrt(n);
    return sr * sr == n ? 1 : 2;
}