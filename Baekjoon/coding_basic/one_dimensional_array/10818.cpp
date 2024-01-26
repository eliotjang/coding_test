#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	freopen("input.txt", "r", stdin);
	int n;
	cin >> n;
	vector<int> vt(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> vt[i];
	}
	sort(vt.begin(), vt.end());
	cout << vt.front() << ' ' << vt.back() << endl;
}