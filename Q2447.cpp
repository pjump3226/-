#include <iostream>
using namespace std;
char **arr;

void PrintStar2(int n, int r, int c) {

	for (int i = r - n + (n / 3); i < r - n + (n / 3) + (n / 3); i++) {
		for (int j = c - n + (n / 3); j < c - n + (n / 3) + (n / 3); j++) {
			arr[i][j] = ' ';
		}
	}
	if (n / 3 >= 1) PrintStar2(n / 3, r - n + n / 3, c - n + n / 3);
	
	for (int i = r - n + n / 3; i < r - n + n / 3 + n / 3; i++) {
		for (int j = c + n / 3; j < c + n / 3 + n / 3; j++) {
			arr[i][j] = ' ';
		}
	}
	if (n / 3 >= 1) PrintStar2(n / 3, r - n + n / 3, c + n / 3);

	for (int i = r - n + n / 3; i < r - n + n / 3 + n / 3; i++) {
		for (int j = c + n + n / 3; j < c + n + n / 3 + n / 3; j++) {
			arr[i][j] = ' ';
		}
	}
	if (n / 3 >= 1) PrintStar2(n / 3, r - n + n / 3, c + n + n / 3);

	for (int i = r + n / 3; i < r + n / 3 + n / 3; i++) {
		for (int j = c - n + n / 3; j < c - n + n / 3 + n / 3; j++) {
			arr[i][j] = ' ';
		}
	}
	if (n / 3 >= 1) PrintStar2(n / 3, r + n / 3, c - n + n / 3);

	for (int i = r + n / 3; i < r + n / 3 + n / 3; i++) {
		for (int j = c + n + n / 3; j < c + n + n / 3 + n / 3; j++) {
			arr[i][j] = ' ';
		}
	}
	if (n / 3 >= 1) PrintStar2(n / 3, r + n / 3, c + n + n / 3);

	for (int i = r + n + n / 3; i < r + n + n / 3 + n / 3; i++) {
		for (int j = c - n + n / 3; j < c - n + n / 3 + n / 3; j++) {
			arr[i][j] = ' ';
		}
	}
	if (n / 3 >= 1) PrintStar2(n / 3, r + n + n / 3, c - n + n / 3);

	for (int i = r + n + n / 3; i < r + n + n / 3 + n / 3; i++) {
		for (int j = c + n / 3; j < c + n / 3 + n / 3; j++) {
			arr[i][j] = ' ';
		}
	}
	if (n / 3 >= 1) PrintStar2(n / 3, r + n + n / 3, c + n / 3);

	for (int i = r + n + n / 3; i < r + n + n / 3 + n / 3; i++) {
		for (int j = c + n + n / 3; j < c + n + n / 3 + n / 3; j++) {
			arr[i][j] = ' ';
		}
	}
	if (n / 3 >= 1) PrintStar2(n / 3, r + n + n / 3, c + n + n / 3);
}

void PrintStar(int n) {
	for (int i = n/3; i < 2*n/3; i++) {
		for (int j = n/3; j < 2*n/3; j++) {
			arr[i][j] = ' ';
		}
	}
	PrintStar2(n/3, n/3, n/3);
}
 

int main() {
	int n;
	cin >> n;
	arr = new char*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new char[n];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			arr[i][j] = '*';
		}
	}
	PrintStar(n);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j];
		}
		cout << '\n';
	}
	return 0;
}