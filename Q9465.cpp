#include <iostream>
#include <algorithm>
using namespace std;
int cost[200001][2];
int dp[200001][2];

int main() {
	int t, n;
	cin >> t;
	int m;
	for (int i = 0; i < t; i++) {
		cin >> n;
		m = 0;
		for (int j = 0; j < n; j++) {
			cin >> cost[j][0];
		}
		for (int j = 0; j < n; j++) {
			cin >> cost[j][1];
		}
		dp[0][0] = cost[0][0];
		dp[0][1] = cost[0][1];
		for (int j = 1; j < n; j++) {
			dp[j][0] = max(dp[j - 1][1], max(dp[j - 2][0], dp[j - 2][1])) + cost[j][0];
			dp[j][1] = max(dp[j - 1][0], max(dp[j - 2][0], dp[j - 2][1])) + cost[j][1];
		}
		for (int j = 0; j < n; j++) {
			if (m < dp[j][0]) m = dp[j][0];
			if (m < dp[j][1]) m = dp[j][1];
		}
		cout << m << '\n';
	}

	return 0;
}