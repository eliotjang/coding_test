#include <iostream>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    int n;
    int count_five = 0;
    cin >> n;
    while(n) {
        int tmp = n;
        while(tmp % 5 == 0) {
            tmp /= 5;
            count_five++;
        }
        n--;
    }
    cout << count_five << endl;
    return 0;
}