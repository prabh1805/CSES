/*
* @Author: Prabhat Jha
* @Date:   2025-07-08 15:40:36
* @Last Modified by:   prabhatjha
* @Last Modified time: 2025-07-08 15:44:18
*/
#include<iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n + 1, 0);
	for (int i = 1; i < n; ++i) {
		int x;
		cin >> x;
		v[x] = 1;
	}
	int ans = 1;
	for (int i = 1; i <= n; i++) {
		if (!v[i]) {
			ans = i;
			break;
		}
	}
	cout << ans << '\n';
	return 0;
}