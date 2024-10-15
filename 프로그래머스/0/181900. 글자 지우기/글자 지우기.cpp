#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) {
    char delimeter = '*';
    for (vector<int>::iterator it = indices.begin(); it != indices.end(); ++it) {
        my_string.at(*it) = delimeter;
    }
    size_t found = my_string.find(delimeter);
    while (found != string::npos) {
        my_string.erase(found, 1);
        found = my_string.find(delimeter);
    }
    return my_string;
}

// another person's solution : use greater and sort