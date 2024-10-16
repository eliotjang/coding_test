#include <vector>
#include <ctime> // time_t, struct tm, difftime

using namespace std;

int solution(vector<int> date1, vector<int> date2) {
    struct tm t1 = {0}, t2 = {0};
    t1.tm_year = date1[0], t1.tm_mon = date1[1], t1.tm_mday = date1[2];
    t2.tm_year = date2[0], t2.tm_mon = date2[1], t2.tm_mday = date2[2];
    int x = (difftime(mktime(&t2), mktime(&t1)) > 0) ? 1 : 0;
    return x;
}