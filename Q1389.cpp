#include <iostream>
#include <algorithm>
using namespace std;
int arr[101][101];

int main() {
	int n, m, r1, r2;
	int  least= 10000000;
	long long sum;
	int index;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> r1 >> r2;
		arr[r1][r2] = 1;
		arr[r2][r1] = 1;
	}
	
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i != j) {
					if (arr[i][k] != 0 && arr[k][j] != 0) {
						if (arr[i][j] == 0) arr[i][j] = arr[i][k] + arr[k][j];
						else arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
					}
				}
			}
		}
	}
	for (int i = 1; i <=n ; i++) {
		sum = 0;
		for (int j = 1; j <= n; j++) {
			sum += arr[i][j];
		}
		if (least > sum) {
			least = sum;
			index = i;
		}
	}
	cout << index << '\n';
	return 0;
}