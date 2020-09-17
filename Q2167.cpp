#include <iostream>
using namespace std;
int arr[301][301];

int main() {
	int n, m, k;
	long long sum;
	int r1, c1, r2, c2;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}
	cin >> k;
	for (int l = 0; l < k; l++) {
		sum = 0;
		cin >> r1 >> c1 >> r2 >> c2;
		for (int i = r1; i <= r2; i++) {
			for (int j = c1; j <= c2; j++) {
				sum += arr[i][j];
			}
		}
		cout << sum << '\n';
	}
	return 0;
}