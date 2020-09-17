#include <iostream>
#include <math.h>
using namespace std;
char** arr;

void PrintStar(int n, int r, int c) {
	if (n % 2 == 0) {
		for (int i = r; i<r+pow(2,n)-1; i++) {
			if (i == r) {
				for (int j = c; j < c+pow(2, n + 1) - 3; j++) {
					arr[i][j] = '*';
				}
			}
			else {
				arr[i][c + (int)pow(2, n + 1) - 4 -(i-r)] = '*';
				arr[i][c + (i-r)] = '*';
			}
		}
	}
	else {
		for (int i = r; i > r - (pow(2, n) - 1); i--) {
			if (i == r) {
				for (int j = c; j < c + pow(2, n + 1) - 3; j++) {
					arr[i][j] = '*';
				}
			}	
			else {
				arr[i][c + (int)pow(2, n + 1) - 4 - (r - i)] = '*';
				arr[i][c + (r - i)] = '*';
			}
		}
	}
	if (n != 1) {
		if (n % 2 == 0) {
			PrintStar(n - 1, r + (pow(2, n) - 2) / 2, c + pow(2, n - 1));
		}
		else {
			PrintStar(n - 1, r - (pow(2, n) - 2) / 2, c + pow(2, n - 1));
		}
	}
}


int main() {
	int n;
	cin >> n;
	arr = new char*[(int)(pow(2, n)-1)];
	for (int i = 0; i < pow(2, n) - 1; i++) {
		arr[i] = new char[(int)(pow(2,n+1)-3)];
	}
	for (int i = 0; i < pow(2, n) - 1; i++) {
		for (int j = 0; j < pow(2, n + 1) - 3; j++) {
			arr[i][j] = ' ';
		}
	}
	
	if (n%2 == 0 )PrintStar(n,0,0);
	else PrintStar(n, pow(2, n) - 2, 0);

	if (n % 2 == 0) {
		for (int i = 0; i < pow(2, n) - 1; i++) {
			for (int j = 0; j < pow(2, n + 1) - 3-i; j++) {
				cout << arr[i][j];
			}
			cout << '\n';
		}
	}
	else {
		for (int i = 0; i < pow(2, n) - 1; i++) {
			for (int j = 0; j < pow(2, n + 1) - 3-(pow(2,n)-2-i); j++) {
				cout << arr[i][j];
			}
			cout << '\n';
		}
	}
	return 0;
}