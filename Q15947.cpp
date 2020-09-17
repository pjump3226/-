#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int q = n / 14;
	int r = n % 14;
	if (r == 1 || r == 13) cout << "baby" << '\n';
	else if (r == 2 || r == 0) cout << "sukhwan" << '\n';
	else if (r==5) cout << "very" << '\n';
	else if (r==6) cout << "cute" << '\n';
	else if (r==9) cout << "in" << '\n';
	else if (r==10)	cout << "bed" << '\n';
	else {
		if (q < 3) {
			if (r == 3 || r == 7 || r == 11) cout << "tururu";
			else cout << "turu";
			for (int i = 0; i < q; i++) {
				cout << "ru";
			}
		}
		else if (q==3){
			if (r == 3 || r == 7 || r == 11) {
				cout << "tu+ru*" << q + 2;
			}
			else {
				cout << "turu";
				for (int i = 0; i < q; i++) {
					cout << "ru";
				}
			}
		}
		else {
			if (r == 3 || r == 7 || r == 11) {
				cout << "tu+ru*" << q + 2;
			}
			else {
				cout << "tu+ru*" << q + 1;
			}
		}
		cout << '\n';
	}
}