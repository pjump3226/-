#include <iostream>
using namespace std;

int main() {
	int n, r, c;
	cin >> n >> r >> c;
	char arr[100][100];
	if ((r + c) % 2 == 0) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((i + j) % 2 == 0) arr[i][j] = 'v';
				else arr[i][j] = '.';
			}
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if ((i + j) % 2 == 0) arr[i][j] = '.';
				else arr[i][j] = 'v';
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j];
		}
		cout << '\n';
	}
	return 0;
}

