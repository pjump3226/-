#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000];
int dp[1000][2]; //0: ¿Þ, 1: ¿À

int main() {
	int n;
	int m = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++) {
		bool val = false;
		for (int j = 0; j <= i; j++) {
			if (arr[i] > arr[j]) {
				dp[i][0] = max(dp[i][0], dp[j][0] + 1);
				val = true;
			}
		}
		if (!val) {
			dp[i][0] = 1;
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		bool val = false;
		for (int j = n - 1; j >= i; j--) {
			if (arr[i] > arr[j]) {
				dp[i][1] = max(dp[i][1], dp[j][1] + 1);
				val = true;
			}
		}
		if (!val) {
			dp[i][1] = 1;
		}
	}

	for (int i = 0; i < n; i++) {
		m = max(m, dp[i][0] + dp[i][1] - 1);
	}

	cout << m << '\n';
	return 0;
}