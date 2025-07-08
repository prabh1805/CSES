/*
* @Author: Prabhat Jha
* @Date:   2025-07-08 16:29:27
* @Last Modified by:   prabhatjha
* @Last Modified time: 2025-07-08 16:32:30
*/
#include<iostream>
#include<string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = (int)s.size();
	int curr_len = 1, max_len = 1;
	char ch = s[0];
	for (int i = 1; i < n; i++) {
		if (s[i] == ch) {
			curr_len ++;
		} else {
			max_len = max(max_len, curr_len);
			curr_len = 1;
			ch = s[i];
		}
	}
	max_len = max(max_len, curr_len);
	cout << max_len;
	return 0;
}