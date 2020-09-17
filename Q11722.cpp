#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000];
int dp[1000];

int main() {
	int n, m;
	m = 1;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] < arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		cout << "dp : " <<dp[i] << '\n';
		if (m < dp[i]) m = dp[i];
	}

	cout << m << '\n';
	return 0;
}