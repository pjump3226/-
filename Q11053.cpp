#include <iostream>
using namespace std;
int arr[1001];
int dp[1001];

int main() {
	int n;
	cin >> n;
	int count = 0;
	int m;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	dp[0] = 1;
	for (int i = 1; i < n; i++) {
		m = 0;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j]) {
				if (m < dp[j]) m = dp[j];
			}
		}
		dp[i] = m + 1;
	}
	m = 0;
	for (int i = 0; i < n; i++) {
		if (m < dp[i]) m = dp[i];
	}
	cout << m << '\n';
	return 0;
}