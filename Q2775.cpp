#include <iostream>
using namespace std;

int arr[15][15];

int main() {
	int t, k, n;
	cin >> t; 
	for (int i = 1; i <= 14; i++) {
		arr[0][i] = i;
	}
	for (int i = 0; i < t; i++) {
		cin >> k >> n;
		for (int j = 1; j <= k; j++) {
			for (int u = 1; u <= n; u++) {
				for (int y = 1; y <= u; y++) {
					arr[j][u] += arr[j - 1][y];
				}
			}
		}
		cout << arr[k][n] << '\n';
		for (int j = 1; j <= k; j++) {
			for (int u = 1; u <= n; u++) {
				arr[j][u] = 0;
			}
		}
	}
	return 0;
}