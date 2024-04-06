#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // freopen("input.txt","r",stdin);
    int N;
    cin >> N;
    vector<int> A(N);
    vector<int> D(N, 1);
    vector<int> V(N, -1);
    for (int i=0; i<N; i++) {
        cin >> A[i];
    }
    D[0] = 1;
    for (int i=1; i<N; i++) {
        for (int j=0; j<i; j++) {
            if (A[j] < A[i] && D[i] < D[j] + 1) {
                D[i] = D[j] + 1;
                V[i] = j;
            }
        }
    }
    
    int max_length = 0;
    int top = 0;
    for (int i=0; i<N; i++) {
        if (max_length < D[i]) {
            max_length = D[i];
            top = i;
        }
    }
    cout << max_length << endl;
    vector<int> result;
    for (int i=0; i<max_length; i++) {
        result.insert(result.begin(), A[top]);
        top = V[top];
    }
    for (int i=0; i<result.size(); i++) {
        cout << result[i] << ' ';
    }

    return 0;
}

