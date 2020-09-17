#include <iostream>
using namespace std;

int main() {
	int n;
	int b3=0, b5=0;
	int rb3=0, rb5=0;
	cin >> n;
	b5 = n / 5;
	while (1) {
		if (b5 < 0) {
			break;
		}
		int left = n - (b5 * 5);
		b3 = left / 3;
		if (b3*3 + b5*5 == n) {
			rb3 = b3; rb5 = b5;
			break;
		}
		if ( b5 == 0) {
			break;
		}
		b5--;
	}
	if (rb3*3 + rb5*5 == n) {
		cout << rb3 + rb5 << '\n';
	}
	else {
		cout << -1 << '\n';
	}
	return 0;
}