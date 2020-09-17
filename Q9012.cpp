#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string s;
		stack<char> c_s;
		cin >> s;
		bool val = true;
		for (int j = 0; j < s.size(); j++) {
			if (s.at(j) == '(') {
				c_s.push(s.at(j));
			}
			else {
				if (c_s.empty()) {
					val = false;
					break;
				}
				else {
					c_s.pop();
				}
			}
		}
		if (c_s.empty() && val) cout << "YES" << '\n';
		else cout << "NO" << '\n';
	}
	return 0;
}