#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	string result;
	cin >> s;
	result = s.at(0);
	for (int i = 1; i < s.size(); i++) {
		if (s.at(i) == '-') {
			result += s.at(i + 1);
		}
	}
	cout << result << '\n';
	return 0;
}