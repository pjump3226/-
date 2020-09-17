#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	char **arr = new char*[n];
	bool *row = new bool[n];
	bool *col = new bool[m];
	fill_n(row, n, 0);
	fill_n(col, m, 0);
	for (int i = 0; i < n; i++) {
		arr[i] = new char[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (arr[i][j] == 'X') {
				row[i] = true;
				col[j] = true;
			}
		}
	}

	int r = 0, c = 0;
	for (int i = 0; i < n; i++) {
		if (!row[i]) r++;
	}
	for (int i = 0; i < m; i++) {
		if (!col[i]) c++;
	}


	if (r >= c) cout << r << '\n';
	else cout << c << '\n';
	return 0;
}