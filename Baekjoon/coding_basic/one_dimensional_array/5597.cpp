#include <iostream>
#include <vector>
using namespace std;


// 포인터 사용
int main_2()
{
    // freopen("input.txt","r",stdin);
    int tmp = 0;
    int *attend = new int[30];
    for (int i=0; i<28; i++) {
        cin >> tmp;
        *(attend + tmp - 1) = tmp;
    }
    for (int i=0; i<30; i++) {
        if (*(attend + i) == 0) {
            cout << i + 1 << endl;
        }
    }

    delete[] attend;
    return 0;
}

// vector 컨테이너 사용
int main()
{
    // freopen("input.txt", "r", stdin);
    int tmp = 0;
    vector<int> attend(30,0);
    for(int i=0; i<28; i++) {
        cin >> tmp;
        attend[tmp-1] = tmp;
    }
    for(int i=0; i<30; i++) {
        if(attend[i] == 0) {
            cout << i + 1 << ' ';
        }
    }
    return 0;
}