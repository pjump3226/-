#include <iostream>
#include <algorithm>
using namespace std;
int dp[50001];

int main() {
	int n;
	cin >> n;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		int minimum = 4;
		for (int j = 1; j*j <= i; j++) {
			int temp = i - (j * j);
			minimum = min(minimum, dp[temp]);
		}
		dp[i] = minimum + 1;
	}
	cout << dp[n] << '\n';
	return 0;
}