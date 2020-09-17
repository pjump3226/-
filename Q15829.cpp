#include <iostream>
#include <string>
using namespace std;

long long pow2(int num, int n) {
	int count = n;
	long long num2 = num;
	for (int i = 0; i < n-1; i++) {
		num2 *= num;
		num2 %= 1234567891;
	}
	if (n == 0) return 1;
	else return num2;
}

int main() {
	int l;
	cin >> l;
	string s;
	cin >> s;
	long long result = 0;
	for (int i = 0; i < l; i++) {
		result += (s.at(i) - 'a' + 1)*pow2(31, i);
		result %= 1234567891;
	}
	cout << result << '\n';
	return 0;
}