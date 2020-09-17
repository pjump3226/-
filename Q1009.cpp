#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int a, b;
		cin >> a >> b;
		int result = a;
		int count = 1;
		while (1) {
			if (b%4 == 0 && count ==4) break;
			else if (count == b % 4) break;
			result *= a;
			count++;
		}
		if (result % 10 == 0) cout << "10" << '\n';
		else cout << result % 10 << '\n';
	}
	return 0;
}