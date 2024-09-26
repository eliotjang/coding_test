#include <string>
#include <algorithm>

using namespace std;

bool isSmall(int i) { return (i < 'l' == 1);}

string solution(string myString) {
    replace_if(myString.begin(), myString.end(), isSmall, 'l');
    return myString;
}