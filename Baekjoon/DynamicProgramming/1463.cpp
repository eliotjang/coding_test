#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int memo[1000000] = {0,};
    int N;
    cin >> N;
    // D[n] = min(D[n-1], D[n/3], D[n/2])
    if (N == 1) return 1;
    for (int i = 2; i<N; i++) {
        
    }
    return 0;
}