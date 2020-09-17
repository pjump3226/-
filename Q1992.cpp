#include <iostream>
#include <string>
using namespace std;
bool arr[64][64];

void func(int n, int r, int c) {
	bool val = true;
	bool cmp = arr[r][c];
	for (int i = r; i < r + n; i++) {
		for (int j = c; j < c + n; j++) {
			if (cmp != arr[i][j]) {
				val = false;
				break;
			}
		}
		if (!val) break;
	}
	if (val || n==1) cout << cmp ;
	else {
		cout << "(";
		func(n / 2, r, c);
		func(n / 2, r, c + n / 2);
		func(n / 2, r + n / 2, c);
		func(n / 2, r + n / 2, c + n / 2);
		cout << ")";
	}
}

int main() {
	int n;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		for (int j = 0; j < n; j++) {
			arr[i][j] = s.at(j) - '0';
		}
	}

	func(n, 0, 0);
	cout << '\n';
	return 0;
}