#include <iostream>
using namespace std;
int main() {
	int n; 
	cin >> n;
	if (n == 1) cout << "*" <<'\n';
	else {
		if (n % 2 == 0) {
			for (int i = 1; i <= 2 * n; i++) {
				if (i % 2 == 1) {
					for (int j = 1; j <= n / 2; j++) {
						cout << "* ";
					}
				}
				else {
					for (int j = 1; j <= n / 2; j++) {
						cout << " *";
					}
				}
				cout << '\n';
			}
		}
		else {
			for (int i = 1; i <= 2 * n; i++) {
				if (i % 2 == 1) {
					for (int j = 1; j <= n / 2 +1; j++) {
						cout << "* ";
					}
				}
				else {
					for (int j = 1; j <= n / 2; j++) {
						cout << " *";
					}
				}
				cout << '\n';
			}
		}
	}
	return 0;
}