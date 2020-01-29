#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> queue;
    int query, type, x;
    cin >> query;

    while(query) {
        cin >> type;
        switch (type)
        {
        case 1:
            cin >> x;
            queue.push_back(x);
            break;

        case 2:
            queue.erase(queue.begin());
            break;

        case 3:
            cout << queue.front() << endl; // or queue[0]
            break;

        default:
            return 1;
        }
        query--;
    }
    return 0;
}
