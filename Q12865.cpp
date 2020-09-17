#include <iostream>
#include <algorithm>
using namespace std;
int dp[100001];
int arr[100];

int main() {
	int n, k, w, v;
	int m = 0;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> w >> v;
		dp[w] = max(dp[w], v);
		if (m < dp[w]) m = dp[w];
		for (int j = 1; j < i; j++) {
			if (w + j <= k) {
				dp[w + j] = max(dp[w + j], dp[w] + dp[j]);
				if (m < dp[w + j]) m = dp[w + j];
			}
		}
	}
	cout << m << '\n';
	return 0;
}