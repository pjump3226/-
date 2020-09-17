#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000];
int dp[1000];

int main() {
	int n, m;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	dp[0] = arr[0];
	m = dp[0];
	for (int i = 1; i < n; i++) {
		dp[i] = arr[i];
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + arr[i]);
			}
		}
		if (dp[i] > m) m = dp[i];
	}
	cout << m << '\n';
	return 0;
}