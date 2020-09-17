#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			cout << " ";
		}
		if (i == 0)cout << "*";
		else if (i < n-1) {
			cout << "*";
			for (int j = 0; j < 2 * i - 1; j++) {
				cout << " ";
			}
			cout << "*";
		}
		else {
			for (int j = 0; j < 2 * n- 1; j++) {
				cout << "*";
			}
		}
		cout << '\n';
	}
	return 0;
}