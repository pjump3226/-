#include <iostream>
#include <math.h>
using namespace std;
long long o;

void func(int n, int r, int c) {
	if (n == 1) {
		if (r == 0 && c == 0) o += 1;
		else if (r == 0 && c == 1) o += 2;
		else if (r == 1 && c == 0) o += 3;
		else o += 4;
	}
	else {
		int val = (int)pow(2, n - 1);
		if (r >= val && c >= val) {
			o += (val * val * 3);
			func(n - 1, r - val, c - val);
		}
		else if (r >= val && c < val) {
			o += (val * val * 2);
			func(n - 1, r - val, c);
		}
		else if (r < val && c >= val) {
			o += (val * val);
			func(n - 1, r, c - val);
		}
		else {
			func(n - 1, r, c);
		}
	}
}

int main() {
	int n, r, c;
	cin >> n >> r >> c;
	func(n, r, c);
	cout << o-1 << '\n';
	return 0;
}