#include <iostream>
using namespace std;
int c1, c2, c3;
int arr[2187][2187];

void func(int n, int r, int c) {
	int first = arr[r][c];
	bool val = true;
	for (int i = r; i < r + n; i++) {
		for (int j = c; j < c + n; j++) {
			if (first != arr[i][j]) {
				val = false;
				break;
			}
		}
		if (!val) break;
	}
	if (val) {
		if (first == -1) c1++;
		else if (first == 0) c2++;
		else c3++;
	}
	if (n != 1 && !val) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				func(n / 3, r + i * (n / 3), c + j * (n / 3));
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	func(n, 0, 0);
	cout << c1 << '\n' << c2 << '\n' << c3 << '\n';
	return 0;
}