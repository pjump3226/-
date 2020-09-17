#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	bool val = true;
	for (int i = 0; i < s.size()/2; i++) {
		if (s.at(i) != s.at(s.size() - 1 - i)) {
			val = false;
			break;
		}
	}
	cout << val << '\n';
	return 0;
}