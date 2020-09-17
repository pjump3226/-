#include <iostream>
using namespace std;
char **arr;

void PrintStar(int n, int s) {
	if (n == 1) {
		for (int i = s; i < s + 3; i++) {
			arr[i][s] = '*';
			arr[s][i] = '*';
		}
	}
	else {
		for (int i = s; i < s+4*n-1; i++) {
			arr[i][s] = '*';
		}
		if (s == 0) {
			for (int i = s; i < s + 4 * (n - 1) + 1; i++) {
				arr[s][i] = '*';
			}
		}
		else {
			for (int i = s; i < s + 4 * (n - 1) + 2; i++) {
				arr[s][i] = '*';
			}
		}
		for (int i = s; i < s + 4 * (n - 1) + 1; i++) {
			arr[s+4*n-2][i] = '*';
		}
		for (int i = s; i < s + 4 * n - 1; i++) {
			if(i!=s+1) arr[i][s+4*(n-1)] = '*';
		}
		PrintStar(n - 1, s + 2);
	}
}

int main() {
	int n;
	cin >> n;
	if (n == 1) cout << "*" << '\n';
	else {
		arr = new char*[4 * n - 1];
		for (int i = 0; i < 4 * n -1; i++) {
			arr[i] = new char[4 * (n -1) + 1];
		}
		for (int i = 0; i < 4 * n -1; i++) {
			for (int j = 0; j < 4 * (n - 1) + 1; j++) {
				arr[i][j] = ' ';
			}
		}
		PrintStar(n, 0);
		for (int i = 0; i < 4 * n - 1; i++) {
			if (i == 1) cout << arr[i][0];
			else {
				for (int j = 0; j < 4 * (n - 1) + 1; j++) {
					cout << arr[i][j];
				}
			}
			cout << '\n';
		}
	}
}