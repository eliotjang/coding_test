#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    string s;
    int test;
    cin >> test;
    cin.ignore();
    while(test--) {
        bool flag = true;
        int stack_size = 0;
        getline(cin,s);
        for (int i=0; i<s.size(); i++) {
            char c = s[i];
            if (c == ')') {
                if (stack_size > 0) {
                    stack_size--;
                } else {
                    flag = false;
                }
            } else {
                stack_size++;
            }
        }
        if (flag == false || stack_size > 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
        
    }
    return 0;
}