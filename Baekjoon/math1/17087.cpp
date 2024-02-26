#include <iostream>
#include <vector>
using namespace std;

long long GCD(long long a, long long b)
{
    while (b != 0) {
        int r = a%b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
    freopen("input.txt","r",stdin);
    int n;
    long long s, tmp;
    long long result = 0;
    cin >> n >> s;
    vector<long long> A(n);
    for (int i=0; i<n; i++) {
        cin >> tmp;
        tmp -= s;
        A[abs(tmp)];
    }
    result = A[0];
    for (int i=1; i<A.size(); i++) {
        if (result > A[i]) {
            result = GCD(result, A[i]);
        } else {
            result = GCD(A[i], result);
        }
    }
    cout << result << endl;
    return 0;
}