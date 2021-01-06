#include <iostream>
#include <string>
using namespace std;

int main() {
	string a, b;
	string result;
	bool carry = 0;
	int num1, num2;
	int sum = 0;
	cin >> a >> b;
	
	if (a.length() >= b.length()) {
		for (int i = 1; i <= b.length(); i++) {
			num1 = a.at(a.length() - i) - '0';
			num2 = b.at(b.length() - i) - '0';
			sum = num1 + num2 + carry;
			if (sum >= 10) {
				carry = 1;
				result += ((sum - 10)+'0');
			}
			else {
				carry = 0;
				result += (sum+'0');
			}
		}
		for (int i = b.length()+1; i <= a.length(); i++) {
			num1 = a.at(a.length() - i) - '0';
			sum = num1 + carry;
			if (sum >= 10) {
				carry = 1;
				result += ((sum - 10) + '0');
			}
			else {
				carry = 0;
				result += (sum + '0');
			}
		}
	}
	else {
		for (int i = 1; i <= a.length(); i++) {
			num1 = a.at(a.length() - i) - '0';
			num2 = b.at(b.length() - i) - '0';
			sum = num1 + num2 + carry;
			if (sum >= 10) {
				carry = 1;
				result += ((sum - 10) + '0');
			}
			else {
				carry = 0;
				result += (sum + '0');
			}
		}
		for (int i = a.length() + 1; i <= b.length(); i++) {
			num2 = b.at(b.length() - i) - '0';
			sum = num2 + carry;
			if (sum >= 10) {
				carry = 1;
				result += ((sum - 10) + '0');
			}
			else {
				carry = 0;
				result += (sum + '0');
			}
		}
	}
	if (carry) cout << 1;
	for (int i = result.length()-1; i >= 0; i--) {
		cout << result.at(i);
	}
	cout << '\n';
	return 0;
}