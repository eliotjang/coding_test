#include <iostream>
#include <algorithm>
#define ARRAYSIZE(A) sizeof(A)/sizeof((A)[0])
// sizeof(stack) / sizeof(stack[0])

using namespace std;

// #V1 답은 맞았으나 시간 초과.
int main() 
{
    int N;
    int stack[100000] = { 0,};
    int type;
    int tmp;
    int index = 0;
    int max;

    cin >> N;

    for ( int i=0; i<N; i++ )
    {
        cin >> type;
        switch (type)
        {
        case 1:
            cin >> tmp;
            stack[index] = tmp;
            index++;
            break;
        case 2:
            // 0으로 초기화해야 최대값 구할 때 그 값까지 구하지 않는다. 데이터 범위: 1 < x <= 10^9
            index--;
            stack[index] = 0;
            break;
        case 3:
            max = *max_element(stack, stack+ARRAYSIZE(stack)-1);
            cout << max << endl;
            break;
        
        default:
            break;
        }
    }

}

