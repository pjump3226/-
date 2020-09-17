#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	string text;
	int sum = 0;
	bool val = false;
	for (int i = 0; i < s.size(); i++) {
		if (s.at(i)!='+' && s.at(i)!='-') {
			text += s.at(i);
		}
		else {
			int num = atoi(text.c_str());
			if (val) sum -= num;
			else sum += num;
			if (s.at(i) == '-') val = true;
			text = "";
		}
		if (i == s.size() - 1) {
			int num = atoi(text.c_str());
			if (val) sum -= num;
			else sum += num;
		}
	}
	cout << sum << '\n';
	return 0;
}