#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int acc = 0;
	int score[301];
	int dp[301][2];
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}
	dp[0][0] = dp[0][1] = score[0];
	for (int i = 1; i < n; i++) {
		dp[i][0] = dp[i - 1][1] + score[i];
		dp[i][1] = max(dp[i - 2][0], dp[i - 2][1]) + score[i];
	}
	cout << max(dp[n-1][0], dp[n-1][1]) << '\n';
	return 0;
}