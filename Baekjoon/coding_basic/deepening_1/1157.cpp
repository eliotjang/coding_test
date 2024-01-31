#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    // freopen("input.txt","r",stdin);
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    map<char, int> m;
    map<char, int>::iterator max_it1;
    map<char, int>::iterator max_it2;
    for (int i=0; i<26; i++) {
        char c = 'A' + i;
        m[c] = 0;
    }
    for (int i=0; i<s.size(); i++) {
        m[s[i]]++;
    }
    // 첫번째 최댓값 확인
    max_it1 = max_element(m.begin(), m.end(), 
                [] (const pair<char, int>& a, const pair<char, int>& b)->bool{return a.second<b.second;});
    int max_value1 = max_it1->second;
    m[max_it1->first] = 0;

    // 두번째 최댓값 확인
    max_it2 = max_element(m.begin(), m.end(),
                [] (const pair<char, int>& a, const pair<char, int>& b)->bool{return a.second<b.second;});
    int max_value2 = max_it2->second;    

    // 최댓값이 중복되어 있는지 확인
    if (max_value1 > max_value2) {
        cout << max_it1->first << endl;
    }
    else {
        cout << '?' << endl;
    }
    
    return 0;
}