/*
* @Author: Prabhat Jha
* @Date:   2025-07-09 13:13:24
* @Last Modified by:   prabhatjha
* @Last Modified time: 2025-07-09 13:16:44
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, x;
	cin >> n >> x;

	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int l = 0, r = n - 1, ans = 0;
	while (l <= r) {
		if (v[l] + v[r] <= x) {
			ans++;
			l++;
			r--;
		} else {
			ans++;
			r--;
		}
	}
	cout << ans;
	return 0;
}