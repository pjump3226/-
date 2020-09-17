#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int **arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[i + 1];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cin >> arr[i][j];
			if (i != 0 ) {
				if (j == 0) arr[i][j] += arr[i - 1][j];
				else if(j==i) arr[i][j] += arr[i - 1][j-1];
				else {
					if (arr[i - 1][j - 1] >= arr[i - 1][j])
						arr[i][j] += arr[i - 1][j - 1];
					else
						arr[i][j] += arr[i - 1][j];
				}
			}
		}
	}

	int max = arr[n - 1][0];
	for (int i = 0; i < n; i++) {
		if (max < arr[n - 1][i]) max = arr[n - 1][i];
	}
	cout << max << '\n';
	return 0;
}