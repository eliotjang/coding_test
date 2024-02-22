#include <iostream>
using namespace std;

int GCD(int a, int b)
{
    while(b != 0) {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int LCM(int a, int b, int g)
{
    return a * b / g;
}

int main()
{
    // freopen("input.txt","r",stdin);
    int a, b, g, l;
    cin >> a >> b;
    g = GCD(a, b);
    l = LCM(a, b, g);
    cout << g << endl;
    cout << l << endl;
    return 0;
}