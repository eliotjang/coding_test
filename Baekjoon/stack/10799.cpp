#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    int iron_rod = 0;
    int cut_rod = 0;
    char c;
    while(cin >> c) {
        if (c == '(') {
            iron_rod++;
            char check_laser;
            while (true) {
                cin >> check_laser;
                if (check_laser == ')') {
                    iron_rod--;
                    cut_rod += iron_rod;
                    break;
                } else {
                    iron_rod++;
                }
                
            }
        } else {
            iron_rod--;
            cut_rod++;
        }
    }
    cout << cut_rod << endl;
    return 0;
}