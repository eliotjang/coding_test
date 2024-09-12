#include <string>

using namespace std;

int solution(int n, string control) {
    for (int i = 0; i < control.size(); i++) {
        char c = control[i];
        switch (c) {
            case 'w':
                n++;
                break;
            case 's':
                n--;
                break;
            case 'd':
                n += 10;
                break;
            case 'a':
                n -= 10;
                break;
            default:
                return 1;
        }
    }
    return n;
}