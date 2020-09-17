#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < 2*n; i++) {
		if (i <= n) {
			for (int j = 0; j < i - 1; j++) {
				cout << " ";
			}
			for (int j = 1; j < 2 * (n+1 - i); j++) {
				cout << "*";
			}
			cout << '\n';
		}
		else {
			for (int j = i-1; j < 2*(n-1); j++) {
				cout << " ";
			}
			for (int j = 2*n-i; j < i+1; j++) {
				cout << "*";
			}
			cout << '\n';
		}
	}
	return 0;
}