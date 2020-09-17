#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int **arr = new int*[n];
	int *rank = new int[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[2];
	}
	for (int i = 0; i < n; i++) {
		rank[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> arr[i][0] >> arr[i][1];
	}
	for (int i = 0; i < n; i++) {
		int count = 1;
		for (int j = 0; j < n; j++) {
			if (i != j) {
				if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
					count++;
				}
			}
		}
		rank[i] = count;
		cout << rank[i] << " ";
	}
	cout << '\n';
	return 0;
}