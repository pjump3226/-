#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < 2*n-1; i++) {
		if (i == 0 || i == 2 * n - 2) {
			for (int j = 0; j < n; j++) {
				cout << "*";
			}
			for (int j = 0; j < 2*(n-1)-1; j++) {
				cout << " ";
			}
			for (int j = 0; j < n; j++) {
				cout << "*";
			}
		}
		else {
			for (int j = abs(n-1-i); j < n-1; j++) {
				cout << " ";
			}
			cout << "*";
			for (int j = 0; j < n - 2; j++) {
				cout << " ";
			}
			cout << "*";
			for (int j =0; j < 2 * (abs(n -1-i))-1 ; j++) {
				cout << " ";
			}
			if (i != n-1) cout << "*";
			for (int j = 0; j < n - 2; j++) {
				cout << " ";
			}
			cout << "*";

		}
		cout << '\n';

	}
	return 0;
}