/*
* @Author: Prabhat Jha
* @Date:   2025-07-09 13:27:28
* @Last Modified by:   prabhatjha
* @Last Modified time: 2025-07-09 13:33:36
*/
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	multiset<int> tickets;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		tickets.insert(x);
	}
	while (m--) {
		int x;
		cin >> x;

		auto it = tickets.upper_bound(x);
		if (it == tickets.begin()) {
			cout << "-1\n";
		} else {
			cout << *(--it) << "\n";
			tickets.erase(it);
		}
	}
	return 0;
}