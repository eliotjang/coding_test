#include <cstdio>
#include <queue>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int N, K;
    scanf("%d %d", &N, &K);
    queue<int> q;
    for(int i=0; i<N; i++) {
        q.push(i+1);
    }
    printf("<");
    for(int i=0; i<N-1; i++) {
        for(int j=0; j<K-1; j++) {
            q.push(q.front());
            q.pop();
        }
        printf("%d, ",q.front());
        q.pop();
    }
    printf("%d>", q.front());
    return 0;
}