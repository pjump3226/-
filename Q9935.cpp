#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2, result;
	string left, right;
	cin >> s1 >> s2;
	while (1) {
		int index = s1.find(s2);
		if (index == -1) break;
		left = s1.substr(0, index);
		right = s1.substr(index + s2.size());
		s1 = s1.at(index) + right;
	}
	if (s1 == "") {
		cout << "FRULA" << '\n';
	}
	else cout << s1 << '\n';
	return 0;
}