#include <iostream>
#include <algorithm>
using namespace std;
int dp[1000];
int arr[1000];

int main() {
	int n;
	int m = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		bool val = false;
		cin >> arr[i];
		for (int j = i; j >= 0; j--) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[j] + 1,dp[i]);
				val = true;
			}
		}
		if (!val) dp[i] = 1;
		if (m < dp[i]) m = dp[i];
	}
	cout << m << '\n';
	return 0;
}