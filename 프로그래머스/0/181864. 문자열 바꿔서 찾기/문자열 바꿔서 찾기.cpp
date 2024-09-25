#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    vector<char>::iterator it;
    for (int i = 0; i < myString.size(); i++) {
        myString[i] == 'A' ? myString[i] = 'B' : myString[i] = 'A';
    }
    size_t found = myString.find(pat);
    if (found != string::npos) {
        return 1;
    }
    return 0;
}