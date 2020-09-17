#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < 2 * n; i++) {
		if (i <= n) {
			for (int j = 0; j < i; j++) {
				cout << "*";
			}
			for (int j = 2*i; j < 2*n; j++) {
				cout << " ";
			}
			for (int j = 0; j < i; j++) {
				cout << "*";
			}
			cout << '\n';
		}
		else {
			for (int j = i; j < 2*n; j++) {
				cout << "*";
			}
			for (int j = 0; j < 2 * (i-n); j++) {
				cout << " ";
			}
			for (int j = i; j < 2 * n; j++) {
				cout << "*";
			}
			cout << '\n';
		}
	}
	return 0;
}