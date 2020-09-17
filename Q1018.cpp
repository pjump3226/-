#include <iostream>
using namespace std;
char chess1[8][8];
char chess2[8][8];

int main() {
	int n, m;
	int count1 = 0;
	int count2 = 0;
	int min = 32;
	cin >> n >> m;
	char **arr = new char*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new char[m];
	}
	for (int i = 0; i < 8; i ++) {
		for (int j = 0; j < 8; j ++) {
			if((i+j)%2 == 1)
				chess1[i][j] = 'W';
			else
				chess1[i][j] = 'B';
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 1)
				chess2[i][j] = 'B';
			else
				chess2[i][j] = 'W';
		}
	}
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j ++) {
			cin >> arr[i][j];
			//cout << chess1[i][j];
		}
		//cout << '\n';
	}
	for (int i = 0; i <=n-8 ; i++) {
		for (int j = 0; j <= m-8; j++) {
			for (int k = 0; k <8; k++) {
				for (int w = 0; w < 8; w++) {
					if (chess1[k][w] != arr[k+i][w+j]) {
						count1++;
					}
				}
			}
			if (min > count1) {
				min = count1;
			}
			count1 = 0;
		}
	}

	for (int i = 0; i <= n - 8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			for (int k = 0; k < 8; k++) {
				for (int w = 0; w < 8; w++) {
					if (chess2[k][w] != arr[k + i][w + j]) {
						count2++;
					}
				}
			}
			if (min > count2) {
				min = count2;
			}
			count2 = 0;
		}
	}

	cout << min << '\n';


	return 0;
}