/*
* @Author: Prabhat Jha
* @Date:   2025-07-08 18:46:44
* @Last Modified by:   prabhatjha
* @Last Modified time: 2025-07-08 18:50:56
*/
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	long long ans = 0;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
		if (i > 0 && v[i] < v[i - 1]) {
			ans += (v[i - 1] - v[i]);
			v[i] = v[i - 1];
		}
	}
	cout << ans;
	return 0;
}