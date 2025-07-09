/*
* @Author: Prabhat Jha
* @Date:   2025-07-09 19:32:20
* @Last Modified by:   prabhatjha
* @Last Modified time: 2025-07-09 19:39:19
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> v;
	for (int i = 0; i < n; i++) {
		int strt, end;
		cin >> strt >> end;
		v.push_back({strt, 1});
		v.push_back({end, -1});
	}
	sort(v.begin(), v.end());
	int curr = 0, ans = 0;
	for (auto x : v) {
		curr += x.second;
		ans = max(ans, curr);
	}
	cout << ans << '\n';
	return 0;
}