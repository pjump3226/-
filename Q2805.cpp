#include <iostream>
#include <algorithm>
using namespace std;
long long tree[1000001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long n, m;
	long long left = 0;
	long long right= 2000000000;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
	}
	long long mid;
	long long h = 0;
	while (left <= right) {
		long long sum = 0;
		mid = (left + right) / 2;
		for (int i = 0; i < n; i++) {
			if (tree[i] > mid) {
				sum += (tree[i] - mid);
			}
		}
		if (sum >= m) {
			h = mid;
			left = mid + 1;
		}
		else {
			right = mid - 1;
		}
	}
	cout << h << '\n';
	return 0;
}