/*
* @Author: Prabhat Jha
* @Date:   2025-07-08 22:29:47
* @Last Modified by:   prabhatjha
* @Last Modified time: 2025-07-08 22:42:15
*/
#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> a(n), b(m);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	int ans = 0, i = 0, j = 0;
	while (i < n && j < m) {
		if (abs(a[i] - b[j]) <= k) {
			ans++;
			i++;
			j++;
		} else if (a[i] - b[j] > k) {
			j++;
		} else {
			i++;
		}
	}
	cout << ans;
	return 0;
}