#include <iostream>
#include <queue>
using namespace std;
bool arr[128][128];
int w = 0;
int b = 0;

void func(int n, int r, int c) {
	bool val = true;
	bool first = arr[r][c];
	for (int i = r; i < r + n; i++) {
		for (int j = c; j < c + n; j++) {
			if (first != arr[i][j]) {
				val = false;
				break;
			}
		}
	}
	if (val) {
		if(first) b++;
		else w++;
	}
	else {
		if (n != 1) {
			func(n / 2, r, c);
			func(n / 2, r + n / 2, c);
			func(n / 2, r, c + n / 2);
			func(n / 2, r + n / 2, c + n / 2);
		}
	}
	
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	func(n ,0, 0);
	cout << w << '\n' << b << '\n';
	return 0;
}