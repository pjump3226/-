#include <iostream>
using namespace std;
int arr[100000];
long long dp[100000];

int main() {
	int n;
	long long max = -1000;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if ((dp[i - 1] + arr[i]) > 0 && arr[i] < (dp[i-1] + arr[i])) {
			dp[i] = dp[i - 1] + arr[i];
		}
		else {
			dp[i] = arr[i];
		}
		if (max < dp[i]) max = dp[i];
	}

	cout << max << '\n';
	return 0;
}