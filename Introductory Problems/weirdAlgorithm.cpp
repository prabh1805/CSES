/*
* @Author: Prabhat Jha
* @Date:   2025-07-08 14:48:53
* @Last Modified by:   prabhatjha
* @Last Modified time: 2025-07-08 15:00:43
*/
#include<iostream>
using namespace std;

int main() {
	long long n;
	cin >> n;
	while (n != 1) {
		cout << n << " ";
		if (n % 2 == 0) {
			n /= 2;
		} else {
			n = 3 * n + 1;
		}
	}
	cout << 1;
	return 0;
}