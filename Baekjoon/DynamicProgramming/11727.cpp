#include <cstdio>
using namespace std;

int d[1001];
int main()
{
    // freopen("input.txt","r",stdin);
    d[0] = 1;
    d[1] = 1;
    int n;
    scanf("%d",&n);
    for (int i=2; i<=n; i++) {
        d[i] = (d[i-1] + 2 * d[i-2]) % 10007;
    }
    printf("%d",d[n]);
    return 0;
}