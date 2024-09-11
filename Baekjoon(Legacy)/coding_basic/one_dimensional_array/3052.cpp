#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <unordered_set>
using namespace std;

// Vector 컨테이너의 unique(), erase() 사용
int main_3()
{
    //freopen("input.txt","r",stdin);
    int v = 0;
    vector<int> vt;
    vector<int>::iterator it;
    for(int i=0; i<10; i++) {
        cin >> v;
        vt.push_back(v % 42);
    }
    sort(vt.begin(), vt.end());
    vector<int>::iterator u_it = unique(vt.begin(), vt.end());
    vt.erase(u_it, vt.end());
    cout << vt.size() << endl;
    return 0;
}

// Set 컨테이너의 중복 원소가 불가한 특징을 이용
int main_2()
{
    freopen("input.txt","r",stdin);
    int v = 0;
    vector<int> vt(10,0);
    for(int i=0; i<10; i++) {
        cin >> v;
        vt[i] = v % 42;
    }
    unordered_set<int> s(vt.begin(), vt.end());
    for(const auto& element: s)
        cout << element << ' ';
    cout << endl << s.size() << endl;
    return 0;
}

// 다중 for문으로 중복 원소 확인
int main()
{
    //freopen("input.txt","r",stdin);
    int tmp = 0;
    int result = 0;
    int *pArr = new int[10];
    for (int i=0; i<10; i++) {
        cin >> tmp;
        pArr[i] = tmp % 42;
    }
    for (int i=0; i<10; i++) {
        int count = 0;
        for (int j=i+1; j<10; j++) {
            if (pArr[i] == pArr[j])
                count++;
        }
        if (count == 0) {
            result++;
        }
    }
    cout << result << endl;
    delete[] pArr;
    return 0;
}