#include <iostream>
#include <queue>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int matA[101][101];
	int matB[101][101];
	int n, m1 ,m2, k;
	cin >> n >> m1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m1; j++) {
			cin >> matA[i][j];
		}
	}

	cin >> m2 >> k;
	for (int i = 0; i < m2; i++) {
		for (int j = 0; j < k; j++) {
			cin >> matB[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			int ele = 0;
			for (int l = 0; l < m1; l++) {
				ele += (matA[i][l] * matB[l][j]);
			}
			cout << ele << " ";
		}
		cout << '\n';
	}

	return 0;
}