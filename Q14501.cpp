#include <iostream>
using namespace std;
int arr[16][2]; // 0 : T , 1 : P
int dp[16];

int main() {
	int n;
	int max = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	for (int i = 1; i <= n; i++) {
		if((arr[i][0]+i-1)<=n) dp[i] = arr[i][1];
		int high = 0;
		for (int j = i-1; j >= 1; j--) {
			if (arr[j][0] <= i - j) {
				if (high < dp[j])
					high = dp[j];
			}
		}
		dp[i] += high;
		if (max < dp[i]) max = dp[i];
	}
	cout << max << '\n';
}