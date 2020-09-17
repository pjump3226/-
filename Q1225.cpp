#include <iostream>
#include <string>
using namespace std;

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	long long sum = 0;
	for (int i = 0; i < s1.size(); i++) {
		for (int j = 0; j < s2.size(); j++) {
			int i1 = s1.at(i)-'0';
			int i2 = s2.at(j)-'0';
			sum += (i1 * i2);
		}
	}
	cout << sum << '\n';
	return 0;
}