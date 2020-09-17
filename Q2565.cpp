#include <iostream>
#include <algorithm>
using namespace std;
pair<int, int> arr[100];
int dp[100];

bool cmp(pair<int, int> p1 , pair<int, int> p2) {
	return p1.first < p2.first;
}

int main() {
	int n;
	int m = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i].first >> arr[i].second;
	}
	sort(arr, arr + n, cmp);
	for (int i = 0; i < n; i++) {
		bool val = false;
		for (int j = i; j >= 0; j--) {
			if (arr[i].second > arr[j].second) {
				dp[i] = max(dp[i], dp[j] + 1);
				val = true;
			}
		}
		if (!val) dp[i] = 1;
		if (m < dp[i]) m = dp[i];
	}
	cout << n-m << '\n';
	return 0;
}