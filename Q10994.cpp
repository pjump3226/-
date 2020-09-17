#include <iostream>
using namespace std;
char **arr;

// n번째, start위치
void PrintStar(int n, int s) {
	for (int i = s; i <= s+4 * (n-1); i++) {
		for (int j = s; j <= s+4 * (n-1) ; j++) {
			if (i == s || i == s+4 * (n - 1)) {
				arr[i][j] = '*';
			}
			else {
				if (j == s || j == s+4 * (n - 1)) {
					arr[i][j] = '*';
				}
			}
		}
	}
	if(n>0) PrintStar(n-1, s+2);
}

int main() {
	int n;
	cin >> n;
	arr = new char*[4*(n-1)+2];
	for (int i = 0; i < 4 * n ; i++) {
		arr[i] = new char[4 * (n-1)+2];
	}
	for (int i = 0; i < 4 * (n - 1)+2; i++) {
		for (int j = 0; j < 4 * (n - 1)+2; j++) {
			arr[i][j]= ' ';
		}
	}
	PrintStar(n, 0);
	for (int i = 0; i < 4 * (n -1)+1; i++) {
		for (int j = 0; j < 4 * (n -1)+1; j++) {
			cout << arr[i][j];
		}
		cout << '\n';
	}
	return 0;
}