#include <iostream>
using namespace std;
int arr[101][101];

int main() {
	int n, m;
	int f, l;
	int count = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> f >> l;
		arr[f][l] = 1;
		arr[l][f] = 1;
	}
	for (int k = 1; k <= n; k++) {
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				if (i != j) {
					if(arr[i][k]!=0 && arr[k][j]!=0)
						arr[i][j] = arr[i][k] + arr[k][j];
				}
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (arr[1][i] != 0) count++;
	}
	cout << count << '\n';
	return 0;
}