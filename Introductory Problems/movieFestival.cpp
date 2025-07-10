/*
* @Author: Prabhat Jha
* @Date:   2025-07-10 13:05:35
* @Last Modified by:   prabhatjha
* @Last Modified time: 2025-07-10 13:21:38
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> time(n);
	for (int i = 0; i < n; i++) {
		cin >> time[i].second >> time[i].first;
	}
	sort(time.begin(), time.end());
	int curr = 0 , ans = 0;
	for (auto x : time) {
		if (x.second >= curr) {
			ans++;
			curr = x.first;
		}
	}
	cout << ans << '\n';
	return 0;
}