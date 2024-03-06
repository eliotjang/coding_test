#include <cstdio>
using namespace std;
int d[11];
int main()
{
    // freopen("input.txt","r",stdin);
    int n, t;
    scanf("%d", &t);
    d[0] = 1;
    d[1] = 1;
    d[2] = 2;
    while(t--) {
        scanf("%d", &n);
        for (int i=3; i<=n; i++) {
            d[i] = d[i-1] + d[i-2] + d[i-3];
        }
        printf("%d\n",d[n]);
    }
    return 0;
}