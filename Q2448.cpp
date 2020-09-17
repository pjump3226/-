#include <iostream>
#include <math.h>
using namespace std;
char** arr;

void PrintStar(int n, int c) {

	for (int i = c/2; i<c; i++) {
		for (int j = n -(c-1); j < n; j++) {
			arr[i][j] = arr[i - c/2][j+((c-1)/2+1)];
		}
	}
	for (int i = c / 2; i < c; i++) {
		for (int j = n; j <= n+(c-1); j++) {
			arr[i][j] = arr[i - c / 2][j - ((c-1)/2+1)];
		}
	}
	if (n+1 != c)PrintStar(n, c*2);
}

int main() {
	int n;
	cin >> n;
	arr = new char*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new char[2*n-1];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2 * n - 1; j++) {
			arr[i][j] = ' ';
		}
	}
	
	arr[0][n - 1] = '*';
	arr[1][n - 2] = '*'; arr[1][n] = '*';
	for (int i = 0; i < 5; i++) {
		arr[2][n - 3 + i] = '*';
	}
	if(n>3)PrintStar(n-1,6);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 2*n-1; j++) {
			cout << arr[i][j];
		}
		cout << '\n';
	}
	return 0; 
}