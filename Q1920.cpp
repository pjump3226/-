#include <iostream>
#include <algorithm>
using namespace std;
int a[100001];

int main() {
	int n, m, num;
	int min=100000, max=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (min > a[i]) min = a[i];
		if (max < a[i]) max = a[i];
	}
	cin >> m;
	sort(a, a+n);
	for (int i = 0; i < m; i++) {
		ios::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		cin >> num;
		bool val = false;
		int left = 0;
		int right = n-1;
		if (num < min || num > max) val = false;
		else {
			while (left<=right) {
				int index = (left + right) / 2;
				if (num == a[index]) {
					val = true;
					break;
				}
				if (num < a[index]) {
					right = index - 1;
				}
				else if (num > a[index]) {
					left = index + 1;
				}
			}
		}
		cout << val << '\n';
	}

	return 0;
}