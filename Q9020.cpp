#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		int left = (n / 2);
		int right = (n / 2);
		int val = 0;
		for (int j = 2; j <= sqrt((n/2)); j++) {
			if ((n / 2) % j == 0) {
				val++;
				break;
			}
		}
		if (val == 0) cout << left << " " << right << '\n';
		else {
			for (int k = 1; k < (n / 2); k++) {
				int val2 = 0;
				for (int j1 = 2; j1 <= sqrt(left-k); j1++) {
					if ((left-k)%j1 == 0) {
						val2++;
						break;
					}
				}
				for (int j2 = 2; j2 <= sqrt(right + k); j2++) {
					if ((right + k) % j2 == 0) {
						val2++;
						break;
					}
				}
				if (val2 == 0) {
					cout << left-k << " " << right+k << '\n';
					break;
				}
			}
		}
	}
	return 0;
}