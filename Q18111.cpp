#include <iostream>
#include <algorithm>
using namespace std;
int arr[501][501];
long long t[257];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	long long b;
	int min = 256;
	int max = 0;
	cin >> n >> m >> b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (min > arr[i][j]) min = arr[i][j];
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	for (int i = min; i <= max; i++) {
		long long left = b;

		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {	
				if (arr[j][k] < i) {
					left -= (i - arr[j][k]);
					t[i] += (i - arr[j][k]);
				}
				else if (arr[j][k] > i) {
					t[i] += 2*(arr[j][k]-i);
					left += (arr[j][k] - i);
				}
			}
		}
		if (left < 0) t[i] = -1;
	}
	long long result = t[min];
	int h = 0;
	for (int i = min; i <= max; i++) {
		if (t[i]!=-1 && t[i] <= result) {
			result = t[i];
			h = i;
		}
	}
	cout << result << " " << h << '\n';
	return 0;
}