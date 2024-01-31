#include <iostream>
#include <map>
#include <iomanip>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    string name, grade;
    double mark;
    double subject_sum = 0;
    double grade_sum = 0;
    map<string, double> m{{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}};
    while(cin >> name >> mark >> grade) {
        if (grade == "P") {
            continue;
        }
        subject_sum += mark * m[grade];
        grade_sum += mark;
    }
    cout << fixed << setprecision(6) << subject_sum / grade_sum << endl;
    return 0;
}