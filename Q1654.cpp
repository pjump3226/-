#include <iostream>
#include <algorithm>
using namespace std;
long long lan[10001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int k, n;
	long long left = 1;
	long long right = 2147483647;
	int result = 0;
	cin >> k >> n;
	for (int i = 0; i < k; i++) {
		cin >> lan[i];
	}
	long long mid;
	while (left <= right) {
		long long count = 0;
		mid = (left + right) / 2;
		for (int i = 0; i < k; i++) {
			count += (lan[i] / mid);
		}
		if (count < n) right = mid - 1;
		else if (count >= n) {
			result = mid;
			left = mid + 1;
		}
	}
	cout << result<< '\n';
	return 0;
}