#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int dp[1001];

int func(int n) {
	if (n == 1) {
		dp[n] = max(dp[n - 1], arr[1]);
	}
	else {
		for (int i = 1; i <= n; i++) {
			dp[n] = max(dp[n], dp[n - i] + arr[i]);
		}
	}
	return dp[n];
}

int main() {
	int n;
	int m = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	
	for (int i = 1; i <= n; i++) {
		dp[n] = max(arr[n], dp[n - i] + func(i));
	}

	cout << dp[n] << '\n';
	return 0;
}