#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n % 2 != 0) {
		for (int i = 0; i < n/2 +2; i++) {
			if (i == 0) {
				for (int j = 0; j < n; j++) {
					cout << '*';
				}
			}
			else {
				for (int j = 0; j < n / 2 -i +1; j++) {
					cout << " ";
				}
				cout << "*";
				if (i != 1) {
					for (int j = 0; j < 2 * (i-1) - 1; j++ ) {
						cout << " ";
					}
					cout << "*";
				}
			}
			cout << '\n';
		}
	}
	else {
		cout << "I LOVE CBNU" << '\n';
	}
	return 0;
}