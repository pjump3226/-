#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;

	for (int i = 0; i < t; i++) {
		deque<int> dq;
		int n;
		string s, arr;
		string result;
		string num;
		bool inv = false;
		bool val = true;
		cin >> s >> n >> arr;
		if (arr.size() != 2) {
			for (int j = 0; j < arr.size(); j++) {
				char c = arr.at(j);
				if (c == '[') {}
				else if (c == ']' || c == ',') {
					dq.push_back(atoi(num.c_str()));
					num = "";
				}
				else {
					num += arr.at(j);
				}
			}
		}
		for (int j = 0; j < s.size(); j++) {
			if (s.at(j) == 'R') {
				inv = !inv;
			}
			else {
				if (inv) {
					if (dq.empty()) {
						val = false;
						break;
					}
					else dq.pop_back();
				}
				else {
					if (dq.empty()) {
						val = false;
						break;
					}
					else dq.pop_front();
				}
			}
		}
		if (val) {
			cout << "[";
			int sz = dq.size();
			if (sz >= 1) {
				if (inv) {
					for (int k = 0; k < sz - 1; k++) {
						cout << dq.back() << ",";
						dq.pop_back();
					}
					cout << dq.back();
				}
				else {
					for (int k = 0; k < sz - 1; k++) {
						cout << dq.front() << ",";
						dq.pop_front();
					}
					cout << dq.front();
				}
			}
			cout << "]" << '\n';
		}
		else cout << "error" << '\n';
	}
	return 0;
}