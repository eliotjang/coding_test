#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n==0) return 1;
    else if (n<=2) return n;
    return n * factorial(n-1);
}

int main()
{
    // freopen("input.txt","r",stdin);
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}