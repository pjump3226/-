#include <iostream>
#include <string>
using namespace std;

int main() {
	string str1, str2;
	int a, b;
	cin >> str1 >> str2;
	a = str1.at(0)-'0' + (str1.at(1) - '0') * 10 + (str1.at(2) - '0') * 100;
	b = str2.at(0)-'0' + (str2.at(1) - '0') * 10 + (str2.at(2) - '0') * 100;
	if (a > b) {
		cout << a << '\n';
	}
	else cout << b << '\n';
	return 0;
}