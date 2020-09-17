#include <iostream>
using namespace std;
long long arr[101];

int main() {
	int t;
	cin >> t;
	arr[1]=1, arr[2]=1, arr[3] = 1;
	arr[4]=2, arr[5] = 2;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		if (n < 6) cout << arr[n] << '\n';
		else {
			for (int j = 6; j <= n; j++) {
				arr[j] = arr[j - 5] + arr[j - 1];
			}
			cout << arr[n] << '\n';
		}
	}
}