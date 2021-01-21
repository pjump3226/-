#include <iostream>
using namespace std;
int dp[51][51][51];

int func(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	else if (dp[a][b][c] != 0) return dp[a][b][c];
	else if (a > 20 || b > 20 || c > 20) {
		dp[a][b][c] = func(20, 20, 20);
		return dp[a][b][c];
	}
	else if (a < b && b < c) {
		dp[a][b][c] = func(a, b, c - 1) + func(a, b - 1, c - 1) - func(a, b - 1, c);
		return dp[a][b][c];
	}
	else {
		dp[a][b][c] = func(a - 1, b, c) + func(a - 1, b - 1, c) + func(a - 1, b, c - 1) - func(a - 1, b - 1, c - 1);
		return dp[a][b][c];
	}
}

int main() {
	int a, b, c;
	while (cin >> a >> b >> c) {
		if (a == -1 && b == -1 && c == -1) {
			break;
		}
		cout << "w(" << a << ", " << b << ", " << c << ") = " << func(a, b, c) << '\n';
	}
	return 0;
}