#include <iostream>
#include <algorithm>
using namespace std;
int arr[10001];
int dp[10001][3];

int main() {
	int n;
	int m = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	// 0: 선택x , 1: 선택 , 2: 선택 연속 두 번

	m = dp[0][1] = arr[0];
	for (int i = 1; i < n; i++) {
		dp[i][0] = max(dp[i - 1][1],dp[i - 1][2]);
		dp[i][1] = max(dp[i - 1][0], max(max(dp[i-2][0],dp[i-2][1]),dp[i-2][2])) + arr[i];
		dp[i][2] = dp[i-1][1] + arr[i];
		if (m < max(max(dp[i][0], dp[i][1]), dp[i][2]))
			m = max(max(dp[i][0], dp[i][1]), dp[i][2]);
	}
	cout << m << '\n';
	return 0;
}