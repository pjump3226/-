#include <iostream>
using namespace std;

int main() {
	int n;
	int c=0;
	cin >> n;
	if (n > 1) {
		while (1) {
			if (n >= ((3 * c*c) - (3 * c) + 2) && n <= ((3 * c*c) + (3 * c) + 1))
				break;
			c++;
		}
	}
	cout << c+1 << '\n';
	return 0;
}