/*
* @Author: Prabhat Jha
* @Date:   2025-07-08 22:22:55
* @Last Modified by:   prabhatjha
* @Last Modified time: 2025-07-08 22:25:15
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	int curr = -1, cnt = 0;
	for (int x : v) {
		if (x != curr) {
			cnt++;
			curr = x;
		}
	}
	cout << cnt;
	return 0;
}