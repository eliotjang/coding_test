#include <string>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    answer = my_string.substr(my_string.size() - n);
    return answer;
}

// another person's solution : use string constructor & string::end