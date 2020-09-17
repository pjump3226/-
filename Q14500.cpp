#include <iostream>
using namespace std;
int arr[510][510];
long long shape[19];

int main() {
	int n, m;
	long long max = 0;
	cin >> n >> m;
	for (int i = 3; i < n+3; i++) {
		for (int j = 3; j < m+3; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 3; i < n+3; i++) {
		for (int j = 3; j < m+3; j++) {
			shape[0] = arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 3][j];
			shape[1] = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i][j+3];
			
			shape[2] = arr[i][j] + arr[i][j + 1] + arr[i-1][j] + arr[i-2][j];
			shape[3] = arr[i][j] + arr[i][j - 1] + arr[i - 1][j] + arr[i - 2][j];
			shape[4] = arr[i][j] + arr[i-1][j] + arr[i][j+1] + arr[i][j+2];
			shape[5] = arr[i][j] + arr[i + 1][j] + arr[i][j + 1] + arr[i][j + 2];
			shape[6] = arr[i][j] + arr[i][j + 1] + arr[i + 1][j] + arr[i + 2][j];
			shape[7] = arr[i][j] + arr[i][j - 1] + arr[i + 1][j] + arr[i + 2][j];
			shape[8] = arr[i][j] + arr[i - 1][j] + arr[i][j - 1] + arr[i][j - 2];
			shape[9] = arr[i][j] + arr[i + 1][j] + arr[i][j - 1] + arr[i][j - 2];

			shape[10] = arr[i][j] + arr[i - 1][j] + arr[i][j - 1] + arr[i][j + 1];
			shape[11] = arr[i][j] + arr[i + 1][j] + arr[i][j - 1] + arr[i][j + 1];
			shape[12] = arr[i][j] + arr[i - 1][j] + arr[i + 1][j] + arr[i][j - 1];
			shape[13] = arr[i][j] + arr[i - 1][j] + arr[i + 1][j] + arr[i][j + 1];
		
			shape[14] = arr[i][j] + arr[i - 1][j] + arr[i][j + 1] + arr[i - 1][j + 1];

			shape[15] = arr[i][j] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 2][j + 1];
			shape[16] = arr[i][j] + arr[i + 1][j] + arr[i + 1][j - 1] + arr[i + 2][j - 1];
			shape[17] = arr[i][j] + arr[i][j + 1] + arr[i - 1][j + 1] + arr[i - 1][j + 2];
			shape[18] = arr[i][j] + arr[i][j + 1] + arr[i + 1][j + 1] + arr[i + 1][j + 2];
		
			for (int k = 0; k < 19; k++) {
				if (max < shape[k]) max = shape[k];
			}
		}
	}
	cout << max << '\n';
	return 0;
}