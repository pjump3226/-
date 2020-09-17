#include <iostream>
#include <algorithm>
using namespace std;
int dp[1001][1001];
int arr[1001][1001];

int main() {
	int n, m;
	long long M = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
			dp[i][j] = max(max(dp[i - 1][j], dp[i][j - 1]), dp[i - 1][j - 1]) + arr[i][j];
			if (M < dp[i][j]) M = dp[i][j];
		}
	}
	cout << M << '\n';
	return 0;
}